/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

int LargetArrayElement(std::vector<int>& arr) {
    int n = arr.size();
    int largest = arr[0];
    for(int i = 1; i<n; i++) {
        
        if(arr[i]> largest){
            largest = arr[i];
        }
      
    }
    return largest;
}


int main()
{
    
    std::vector<int> vec = {1,6,3,5,2,4,7};
    int largest=  LargetArrayElement( vec);
    
    std::cout << largest << std::endl;
     
    
    return 0;
}