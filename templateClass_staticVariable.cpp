/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

template <typename T, int Size>     

class Container {
    
    public:
        Container() {
            data = new T[Size];
        
    }
    ~Container(){
        delete[] data;
        
    }
    
    static T m_variable;
    
    
    private:
        T *data;
};

template <typename T, int Size>
T Container<T, Size>::m_variable;


int main()
{
    Container<int,5> c;
    Container<float,7> c1;
    
    Container<int, 5>::m_variable = 50;
    Container<float,7>::m_variable =70;
    
    cout<<Container<int, 5>::m_variable<<endl;
    cout<<Container<float, 7>::m_variable<<endl;
 

    return 0;
}