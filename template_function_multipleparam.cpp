/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <typeinfo>

using namespace std;

//template <typename T1, typename T2>      // multiple parameters

// void foo(T1 input1, T2 input2) {
//     cout<<typeid(input1).name()<<endl;
//     cout<<typeid(input2).name()<<endl;
    
// }


template <typename T1, size_t N>         // non object type param Ex. Arrays

void foo(T1 input1) {
    for(size_t i =0; i<N; i++){
        cout<<typeid(input1).name()<<endl;
    }
    
    
}

int main()
{
    //foo<int, float>(5,5.5f);
    foo<int, 5>(5);

    return 0;
}
