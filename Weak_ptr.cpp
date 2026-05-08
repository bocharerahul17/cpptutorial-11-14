/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <memory>


struct Node {
    std::shared_ptr<Node> next;
    std::weak_ptr<Node>  prev;
    
};

int main()
{
    
    auto n1 = std::make_shared<Node>();
    auto n2 = std::make_shared<Node>();
    
    n1->next = n2;
    
    n2->prev = n1;
    
    std::cout << n2.use_count() << std::endl;
    std::cout << n1.use_count() << std::endl;
    
    
    if(auto p = n2->prev.lock()){
        std::cout<<"prev is alive"<<std::endl;
    }
    
    
    

    return 0;
}