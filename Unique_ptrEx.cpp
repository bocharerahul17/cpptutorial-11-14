/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <memory>

class foo{
    public:
    
    foo(int x) {
        std::cout <<"foo constructed:"<<x<<std::endl;
        
    }
    
    void hello() {
        std::cout<<"From foo"<<std::endl;
        
    }
    
};



int main()
{
    auto ptr = std::make_unique<foo>(10);
    ptr->hello();
    

    // std::cout << *up << std::endl;
    return 0;
}