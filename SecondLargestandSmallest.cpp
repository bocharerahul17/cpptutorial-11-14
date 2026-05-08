/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <climits>

// using namespace std;

int sLargetArrayElement(std::vector<int>& arr) {
    int n = arr.size();
    int largest = arr[0];
    int slargest= -1;
    
    for(int i = 1; i<n; i++) {
        
        if(arr[i]> largest){
            
            slargest = largest;
            largest = arr[i];
            
        }
        else if(arr[i]<largest &&arr[i]>slargest) {
            slargest = arr[i];
        }
      
    }
    return slargest;
}


int SecondSmallestElement(std::vector<int>& arr) {
    
    int n = arr.size();
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    
    for(int i =1; i<n; i++) {
        if(arr[i]<smallest) {
            ssmallest =smallest;
        }
        else if(arr[i]!= smallest && arr[i]<ssmallest) {
            ssmallest = arr[i];
        }
    }
    return ssmallest;
    
}


int main()
{
    
    std::vector<int> vec = {1,6,3,5,2,4,7,9,20,8,15,10};
    // int largest=  sLargetArrayElement( vec);
    
    std::cout <<"SecondLargest Eelement: "<<sLargetArrayElement(vec) << std::endl;
    std::cout<<"SecondSmallest Element: "<< SecondSmallestElement(vec)<< std::endl;
     
    
    return 0;
}