/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

template <typename T>

 class Box{
     
     private:
        T v;
     public:
        Box(T value): v{value} {
            
        }
        T getvalue() {
            return v;
        }
 };


int main()
{
    Box<int> bint{100};
    
    Box<string> bstr{"rahul"};
    
    std::cout << bstr.getvalue() << std::endl;
    
    std::cout << bint.getvalue() << std::endl;

    return 0;
}