/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <future>
#include <stdexcept>

int worker_fucntion() {
    throw std::runtime_error("Runtime exception in worker function");
    return 42;
    
}


int main()
{
    std::future<int> fut = std::async(worker_fucntion);
    try{
        int result= fut.get();
        
    }
    catch(const std::runtime_error &e){
        
        std::cout <<"Runtime exception is caught" <<e.what()<< std::endl;
    }
    
    
    

    return 0;
}