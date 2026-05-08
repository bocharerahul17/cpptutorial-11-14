/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class animal {
    public:
         virtual void speak() {
            cout<<"animal class method"<<endl;
        }
        
        
     virtual ~animal() {
        cout<<"animal destructor"<<endl;
    }
};

class dog: public animal {
    public:
        virtual void speak () {
            cout<<"dog class method"<<endl;
        }
        
        ~dog() {
        cout<<"dog destructor"<<endl;
    }
};

class cat: public animal {
    public:
        virtual void speak () {
            cout<<"cat class method"<<endl;
        }
        
        ~cat() {
        cout<<"cat destructor"<<endl;
    }
};


int main()
{
    
    animal* a1= new dog;
    animal* a2 = new cat;
    
    a1->speak();
    a2->speak();
    
    delete a1;
    delete a2;
    
    
    
    
    return 0;
}