/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Array {
    
    public: 
        Array() {
            data = new int[10];
            for(int i =0; i<10; i++){
                data[i] = i*i;
            }
            
        }
        
        Array(const Array&rhs) {
            data = new int[10];
            for(int i =0;i<10;i++){
                data[i] = rhs.data[i];
            }
            
        }
        
        Array&operator=(const Array&rhs) {
            if(&rhs == this) {
                return *this;
                }
            delete[] data;
            
            data = new int[10];
            for(int i =0;i<10;i++){
                data[i] = rhs.data[i];
            }
            return *this;
            
        }
        
        ~Array() {
            cout<<"Destructor called"<<endl;
            delete[] data;
        }
    void printArray() {
        for(int i =0; i<10; i++){
                cout<<data[i]<<endl;;
            }
    }
    
    private:
    int* data;
    
};


int main()
{
    Array mArray;
    mArray.printArray();
    
    Array mArray2;
    mArray2 = mArray;
    mArray2.printArray();
    
    return 0;
}