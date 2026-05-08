/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <utility>
#include <vector>

std::pair<int,int> MinMaxPair(std::vector<int>& v) {
    int MinVal= v[0];
    int MaxVal = v[0];
    
    for(int num : v){
        if(num>MaxVal) {
            MaxVal = num;
        } if(num<MinVal) {
            MinVal = num;
        }
    }
    return{ MinVal, MaxVal};
    
}


int main()
{
    std::vector<int> vec ={1,2,3,4,5,6,0,10,8};
    auto result= MinMaxPair(vec);
    std::cout << "MinVal:"<<result.first<<" ,"<<"MaxVal:"<<result.second<< std::endl;
    return 0;
    
}