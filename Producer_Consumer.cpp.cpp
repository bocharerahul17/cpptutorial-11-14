

#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>

std::mutex glock;
std::condition_variable cv;

std::queue<int> buffer;
const int MAX_BUFFERSIZE = 5;

void producer () {
 
        for(int i =0; i<10; i++) {
        std::unique_lock<std::mutex> lock(glock);
        cv.wait(lock,  [](){ return buffer.size()<MAX_BUFFERSIZE; });
        buffer.push(i);
        std::cout<< "producer eelement:"<<i<<std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); 
        cv.notify_one();
        
        }  
    
    
};

        


void consumer() {
 
         for(int i= 0;i<10; i++) {
        std::unique_lock<std::mutex> lock(glock);
        cv.wait(lock,  [](){ return !buffer.empty(); });
        int eelement = buffer.front();
        buffer.pop();
        std::cout<< "consumed   no:"<<eelement<<std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        cv.notify_one();
         }
    
    
};

int main()
{
    std::thread t1(producer);
    std::thread t2(consumer);
    t1.join();
    t2.join();
    
    
    return 0;
}