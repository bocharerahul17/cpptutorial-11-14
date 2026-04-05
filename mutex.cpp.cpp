

#include <iostream>
#include <thread>
#include <vector>
// #include <mutex>
// #include <chrono>
#include <atomic>



// std::mutex glock;
static std::atomic<int> shared_value;

// static int shared_value;

void shared_value_increament() {
    // std::lock_guard<std::mutex> lock_guard(glock);
    
    // glock.lock();
    // shared_value = shared_value +1;
    shared_value+=1;
    // glock.unlock();
    
}


// auto lambda = [](int x) {
//     std::cout<<"insside thread "<<std::this_thread::get_id()<<std::endl;
//     std::cout << "value of variable is:" << x<< std::endl;
    
// };

int main()
{
    
    std::vector<std::thread> threads;
    
    for(int i= 0; i<10; i++) {
        
        threads.push_back(std::thread(shared_value_increament));
    //   std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    
    
    for(int i = 0; i<10; i++) {
        threads[i].join();
    }
   


    std::cout<<"shared value :"<< shared_value <<std::endl;
    
    
    return 0;
}