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

void RotateleftbyOne(std::vector<int>& arr) {
    int n = arr.size();
    int temp = arr[0];
 
    for(int j= 1; j<n; j++) {
        arr[j-1] = arr[j];
    }
    arr[n-1] = temp;
}

int main()
{
    
    std::vector<int> vec = {1,2,3,4,6,5};
    RotateleftbyOne(vec);
    
    for(auto e: vec) {
        std::cout << e << std::endl;
    }

    return 0;
}