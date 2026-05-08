/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

void reverseVec (std::vector<int>& vec) {
    int left = 0;
    int right = vec.size() -1;
    
    while(left<right) {
        swap(vec[left],vec[right]);
        left++;
        right--;
    }
    
}


int main()
{
    
    std::vector<int> vec = {1,6,3,5,2,4,7};
     reverseVec( vec);
     
     for(auto n: vec) {
         std::cout << n<<" ,";
     }
    

    return 0;
}