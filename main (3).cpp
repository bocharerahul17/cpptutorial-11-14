/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


class A  {
    public:
        void greet() {
            cout<<" hello from base"<<endl;
        }
};

class B: virtual public  A {};

class C: virtual public A {};

class D: public B,  public C {};


int main()
{
    D d;
    d.greet();
    

    return 0;
}