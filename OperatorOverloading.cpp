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
        x= 0.0f;
        y = 0.0f;
        z = 0.0f;
        
    }
    
    Vector3f operator+ (const Vector3f& rhs) {
        Vector3f result;
        
        x = x+ rhs.x;
        y = y+ rhs.y;
        z = z+rhs.z;
        return result;
        
    }
    
    bool operator ==(const Vector3f& rhs) const {
        if(x ==rhs.x && y ==rhs.y && z == rhs.z) {
            cout <<"vectors equal"<<endl;
            return true;
            
        }
        else {
            cout<<"not equal"<<endl;
            return false;
        }
    }
    
    
    Vector3f& operator ++() {
        x +=1;
        y+=1;
        z+=1;
        return *this;
    }
    


  float x, y, z;  
};

ostream& operator<<(ostream& os, const Vector3f& obj) {
        os<<obj.x<< " ,"<<obj.y<<" ,"<<obj.z;
        
        return os;
    }

int main()
{
    
    Vector3f myVec1;
    myVec1.x =1.0f;
    myVec1.y = 2.0f;
    myVec1.z= 3.0f;
    
    Vector3f myVec2;
    myVec2.x= 1.0f;
    myVec2.y=2.0f;
    myVec2.z =3.0f;
    
    if(myVec1 == myVec2) {
        std::cout << "vectors are equal" << std::endl;
    } else {
        cout<<"vectors are not equl"<<endl;
    }
    
    myVec1 = myVec1 + myVec2;
    
    ++myVec1;
    ++myVec1;
    
    
    
    std::cout<<myVec1.x<<myVec1.y<<myVec1.z<<std::endl;
    
    std::cout <<myVec1<<std::endl;
    

    return 0;
}