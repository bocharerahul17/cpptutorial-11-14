/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std; 

struct Mystruct {
    void function() {
        auto f = [*this]() mutable {
            counter++;
            cout<<"counter inside lambda:"<<counter<<endl;
        
        };
        
        f();
        
        cout<<"counter outside lambda:"<<counter<<endl;
    }
    
    int counter{0};
    
};

int main()
{
    Mystruct obj;
    obj.function();
    obj.function();

    return 0;
}