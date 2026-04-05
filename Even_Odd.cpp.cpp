

#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex glock;
std::condition_variable cv;

int count =1;
const int MAX_COUNT = 10;

void oddthread () {
    
    while(true) {
        std::unique_lock<std::mutex> lock(glock);
        
        cv.wait(lock,  [](){ return (count%2 !=0) || count > MAX_COUNT; });
        
        if (count> MAX_COUNT) break;
        
        std::cout<< "odd no:"<<count<<std::endl;
        
        count++;
        
        cv.notify_one();
        
        
    }
    
};

        


void eventhread() {
     while(true) {
        std::unique_lock<std::mutex> lock(glock);
        
        cv.wait(lock,  [](){ return (count%2 ==0) || count > MAX_COUNT; });
        
        if (count> MAX_COUNT) break;
        
        std::cout<< "evemn  no:"<<count<<std::endl;
        
        count++;
        
        cv.notify_one();
        
        
    }
    
};


int main()
{
    std::thread t1(eventhread);
    std::thread t2(oddthread);
    t1.join();
    t2.join();
    
    
    return 0;
}