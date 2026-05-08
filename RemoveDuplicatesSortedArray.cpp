/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
// #include <set>


// using namespace std;

int RemoveDuplicates(std::vector<int>& arr) {
    int n = arr.size();
    int i =0;
 
    for(int j= 1; j<n; j++) {
        
        if(arr[j] != arr[i]) {
            arr[i+1] =arr[j];
            i++;
        }
            
         
}
return i+1;

}

int main()
{
    
    std::vector<int> vec = {1,1,2,2,3,3,4,4,5,5};
    int length =RemoveDuplicates(vec);
    
    for(int i =0; i<length; i++) {
        std::cout << vec[i] << std::endl;
    }


    
    return 0;
}