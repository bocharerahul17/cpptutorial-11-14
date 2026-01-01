/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <typeinfo>

using namespace std;

template <typename T>      
T sum(T arg) {
    return arg;
    
}

template <typename T, typename...Args>         
T sum(T start, Args... args) {
        return start +sum(args...);
    }
    

int main()
{
   cout<<sum(1,2,3,4)<<endl;

    return 0;
}