/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class IntArray {
    public:
    IntArray(std::string name):mname{name}, data{new int[10]} {
        std::cout << mname<<" was constructed"<< std::endl;
    }
    
    ~IntArray() {
        delete[] data;
        cout<<mname <<"was destructed"<<endl;
    }
    
    IntArray(const IntArray &rhs) {
        mname = rhs.mname;
        cout<<"copy constructed"<<mname<<endl;
        data = new int[10];
        for(int i =0; i<10;i++) {
            data[i] = rhs.data[i];
            
        }
    }
    
    IntArray& operator=(const IntArray &rhs) {
        cout<<"was copy assigned from"<<rhs.mname<<endl;
        if(this != &rhs) {
            delete[] data;
            for(int i =0; i<10;i++) {
            data[i] = rhs.data[i];
            }
        }
        return *this;
    }
    
    IntArray(IntArray &&source) {
        if(this != &source) {
        mname = source.mname;
        source.mname =" ";
        data = source.data;
        source.data = nullptr;
      cout<<mname<<"was moved  constructed"<<endl;
        }
    
    }
    
    IntArray&operator=(IntArray &&source) {
        if(this != &source) {
            mname = source.mname;
            source.mname =" ";
            data = source.data;
            source.data = nullptr;
            cout<<mname<<"was moved  move assigned"<<endl;
        }
     return *this;
    }
    
    private:
    std::string mname;
    int *data;
};


int main()
{
    // IntArray array1("array1");
    
    std::vector<IntArray> myArrays;
    for(int i=0; i <10; i++) {
        IntArray temp(std::to_string(i));
        myArrays.push_back(std::move(temp));
    }
    
    
    return 0;
}