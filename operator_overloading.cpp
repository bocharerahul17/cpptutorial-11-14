/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class Vector3f {
    
    public: 
        Vector3f() {
            x=0.0f;
            y=0.0f;
            z= 0.0f;
            
        }
        
        Vector3f operator+(const Vector3f& rhs){
            Vector3f result;
            result.x = x+rhs.x;
            result.y = y+rhs.y;
            result.z = z+rhs.z;
            return result;
            
        }
        
        Vector3f&operator++() {
            x= x+1;
            y = y+1;
            z =z+1;
            return *this;
            
        }
        
        bool operator==(const Vector3f& rhs) const {
            if(x==rhs.x && y ==rhs.y &&z ==rhs.z) {
                return true;
            }
            else{
                return false;
            }
        }
        
    float x,y,z;
    
};

std::ostream& operator<<(std::ostream& os, const Vector3f& obj) {
    os<<obj.x<<" ,"<<obj.y<<" ,"<<obj.z;
    return os;
}


int main()
{
    Vector3f myvec1;
    
    myvec1.x= 1.0f;
    myvec1.y =2.0f;
    myvec1.z = 3.0f;
    
    Vector3f myvec2;
    
    myvec2.x= 1.0f;
    myvec2.y =2.0f;
    myvec2.z = 3.0f;
    
    if(myvec1 == myvec2){
        cout<<"vector equal"<<endl;
        
    } else{
        cout<<"vectors not equal"<<endl;
    }
    
    myvec1 = myvec1+myvec2;
    std::cout << myvec1.x <<myvec1.y <<myvec1.z << std::endl;
    
    
    ++myvec1;
    ++myvec1;
    
    std::cout << myvec1.x <<myvec1.y <<myvec1.z << std::endl;
    
    std::cout<<myvec1<<std::endl;
    
    

    
    return 0;
}