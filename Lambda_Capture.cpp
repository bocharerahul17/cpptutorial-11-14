/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int a;

int main()
{
    vector<int> v{1,2,3,4,5};
    
    
    int lastresult= 10;
    
    auto print_v =  [=](int n)  mutable
                    { lastresult =50;
                      a= 20;
                     cout<< n<<",";
                     cout<<lastresult<<endl;
                    };
    
    std::for_each(begin(v), end(v), print_v);
    
    cout<<lastresult<<endl;
    cout<<a<<endl;
    
    return 0;
}