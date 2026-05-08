/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class Array {
    
    private:
        int *data;
    public:
    
        Array() {
            std::cout << "constructor called " << std::endl;
            data = new int[10];
            
            for(int i=0; i<10; i++) {
                data[i] = i*i;
            }
        }
        
        Array(const Array& rhs) {
            std::cout << "copy constructor called " << std::endl;
            data = new int[10];
            for(int i =0; i<10; i++) {
                data[i] = rhs.data[i];
            }
            
        }
        
        Array& operator= (const Array& rhs) {
            std::cout << "copy assigned operator called " << std::endl;
            if(this!= &rhs) {
                delete[] data;
                data = new int[10];
                for(int i =0;i<10; i++) {
                    data[i] = rhs.data[i];
                
                }
            }
            return *this;
            
        }
        
        Array(Array&& rhs) {
         {
            data = rhs.data;
            rhs.data = nullptr;
                }
               std::cout << "move constructor called " << std::endl;  
    
        }
        
        Array&operator=(Array&& rhs) {
            if(this!= &rhs) {
                data = rhs.data;
                rhs.data = nullptr;
                
            }
              std::cout << "move assignment operator called " << std::endl;
            return *this;
           
        }
        
         void printArray() {
             for(int i=0; i<10; i++) {
                 cout<<data[i]<<endl;
             }
         }
    
    ~Array() {
        cout<<"Destructor called"<<endl;
        delete [] data;
    }
    
};


int main()
{
    
    Array mArray;
    mArray.printArray();
    
    Array mArray1(mArray);
    mArray1.printArray();
    
    Array mArray2;
    mArray2 = mArray;
    mArray2.printArray();
    
    Array mArray3= std::move(mArray);
    mArray3.printArray();
    
    Array mArray4;
    mArray4 = std::move(mArray3);
    mArray4.printArray();
    
    
    return 0;
}