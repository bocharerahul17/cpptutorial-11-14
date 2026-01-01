/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class IntArray {
    public:
    IntArray(string str):m_name{str}, data{new int[10]} {
        cout<<m_name<<" constructor called"<<endl;
    }
    
    ~IntArray() {
        cout<<m_name<<" Desrtuctor called"<<endl;
        delete[] data;
    }
    
    IntArray(const IntArray& rhs) {
        cout<<m_name<<" copy constructor called"<<endl;
        data = new int[10];
        for(int i= 0; i<10; i++){
            data[i] = rhs.data[i];
        }
    }
    
    IntArray& operator=(const IntArray& rhs) {
        cout<<m_name<<" copy assignment  operator called"<<endl;
        if(&rhs!= this) {
            delete[] data;
           data = new int[10];
         for(int i= 0; i<10; i++){
            data[i] = rhs.data[i];
         }
        }
        return *this;
     
    }
    
    IntArray(IntArray&& source) {
        if(this!= &source) {
        m_name = source.m_name;
        source.m_name = " ";
        data = source.data;
        source.data = nullptr;
            
        }
        cout<<m_name<<" move consrtucted"<<endl;

    }
    
    IntArray& operator=(IntArray&& source) {
        if(this!= &source) {
        m_name = source.m_name;
        source.m_name = " ";
        data = source.data;
        source.data = nullptr;
            
        }
        return *this;
        cout<<m_name<<" move assignmened"<<endl;

    }
    
    private:
    int *data;
    string m_name;
    
    
};


int main()
{
   std::vector<IntArray> myvector;
   myvector.reserve(10);
    for(int i= 0; i<10; i++){
        IntArray temp(std::to_string(i));
        myvector.push_back(std::move(temp));
        
    }
    

    return 0;
}
