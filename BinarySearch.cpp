/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector <int>& arr, int low, int high,  int x) {
    if(high>= low) {
        int mid = low + (high-low)/2;
        if( arr[mid] == x) {
            return mid;
        }
        if(arr[mid]>x) {
            return binary_search(arr, low, mid-1, x);
        }
        else{
            return binary_search(arr, mid+1, high, x);
        }
        
    }
    return -1;
    
}

int main()
{
    vector<int> arr = {3,10,20,30,50,80,100};
    int x= 50;
    int n = arr.size();
    
    int res = binary_search(arr,0, n-1, x);
 
    if(  res ==-1) { 
        cout<<"x not found"<<endl; 
    }
    else {
        cout<<"x found at index :"<<res<<endl;
    }
    return 0;
}