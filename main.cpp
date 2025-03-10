/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <memory>

using namespace std;
struct API {
     API() {
         
     }
     ~API() {
         
     }
     static int MAJOR;
     static int MINOR;
     
     
};

int API::MAJOR= 7;

int main()
{
    // API instance;
    // instance.MAJOR =1;
    std::cout << API::MAJOR << std::endl;
    

    return 0;
}