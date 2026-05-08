/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

template <typename T>

class UniquePtr {
    private:
        T* ptr;
    public:
        
         explicit UniquePtr(T* p = nullptr): ptr{p}{
            
        }
        
        ~UniquePtr() {
            delete ptr;
        }
        
        UniquePtr(const UniquePtr& other) = delete;
        UniquePtr& operator=(const UniquePtr& other) = delete;
        
        UniquePtr(UniquePtr&& other): ptr{other.ptr} {
            other.ptr = nullptr;
        }
        
        UniquePtr& operator = ( UniquePtr&& other) {
            if(this != &other) {
                delete ptr;
                ptr = other.ptr;
                other.ptr = nullptr;
            }
            return* this;
            
        }
        
     T& operator*() {
         return *ptr;
     }
     
     T* operator->() {
         return ptr;
     }
        
     T* get() const {
         return ptr;
     }
    
};


int main()
{
    UniquePtr<int> up(new int(10));
    UniquePtr<int> up1= std::move(up1);
    std::cout << *up << std::endl;
    return 0;
}