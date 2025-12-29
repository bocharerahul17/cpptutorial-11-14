/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <initializer_list>

using namespace std;


struct UDT {
    UDT(int a, int b , int c) {
        cout<<"constructor with 3 param"<<endl;
    }
    
    UDT(initializer_list<int> data):mdata(data) {
        cout<<"initializer_list constructor called"<<endl;
    }
    
    void printdata() {
        for(auto &i:mdata) {
            cout<<i<<endl;
        }
    }
    
    private:
        initializer_list<int> mdata;
        
};

int main()
{
    UDT u{1,2,3};
    //UDT u1(1,2,3);
    
    u.printdata();
    

    return 0;
}