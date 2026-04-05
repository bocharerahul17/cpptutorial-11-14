

#include <iostream>
#include <thread>
// #include <vector>
#include <mutex>
#include <chrono>
#include <condition_variable>




std::mutex gLock;
std::condition_variable cv;

int result =0;
bool notified = false;



int main()
{
    std::thread reporter([&] {
        std::unique_lock<std::mutex> lock(gLock);
        
        if(!notified){
            cv.wait(lock);
            
        }
        std::cout<<"value of result:"<< result<<std::endl;
 
    });
    
    std::thread worker([&] {
        
        std::unique_lock<std::mutex> lock(gLock);
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        result = 10+15;
        
        notified = true;
        cv.notify_one();
   
    });
    
    reporter.join();
    worker.join();
    
    
    // std::cout<<"shared value :"<< shared_value <<std::endl;
    
    
    return 0;
}