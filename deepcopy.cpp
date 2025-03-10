
#include <iostream>
#include <string>
using namespace std;

class Array {
  public:
   Array() {
       cout<<"constructor called"<<endl;
       data = new int[10];
       for(int i= 0;i< 10;i++) {
           data[i] = i*i;
       }
   }
   
    Array(const Array &rhs) {
        
       cout<<" copy constructor called"<<endl;
       data = new int[10];
       for(int i= 0;i< 10;i++) {
           data[i] = rhs.data[i];
       }
   }
   Array& operator=(const Array& rhs) {
       cout<<"copy assignment operator"<<endl;
       if(&rhs == this) {
           return *this;
       }
       delete[] data;
       data = new int[10];
        for(int i= 0;i< 10;i++) {
           data[i] = rhs.data[i];
       }
       return *this;
   }
   
   ~Array() {
       cout<<"destructor called"<<endl;
       delete[] data;
   }
   
   void printarray() {
          for(int i= 0;i< 10;i++) {
           cout<<data[i]<<endl;
       }
   }
   void setdata(int index, int value) {
       data[index] = value;
   }
   
   private:
   int *data; 
};

int main()
{
    Array mArray;
    
    
    mArray.setdata(0,100);
    mArray.setdata(1,500);
    
    Array mArray2;
    mArray2 = mArray;
    
    mArray2.printarray();
    mArray.printarray();

    return 0;
}