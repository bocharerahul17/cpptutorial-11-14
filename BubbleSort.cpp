/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

void BubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    
    for(int i = 0; i<n-1; i++) {
        
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]> arr[j+1]) {
                swap(arr[j], arr[j+1]);
                
            }
            
        }
    }
    
}



int main()
{
    
    std::vector<int> vec = {1,6,3,5,2,4,7};
     BubbleSort( vec);
     
     for(auto n: vec) {
         std::cout << n<<" ,";
     }
    
    return 0;
}