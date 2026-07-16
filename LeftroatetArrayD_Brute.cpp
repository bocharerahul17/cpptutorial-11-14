#include<iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {

        int n = nums.size();
        k = k%n;

        vector<int> temp;

        for(int i = 0; i<k; i++) {
            temp.push_back(i);
        }
        for(int i =k ; i <nums.size(); i++)  {
            nums[i-k]= nums[i];
        }
        for(int i= n-k; i<nums.size(); i++) {


            nums[i] = temp[i-(n-k)];
        }



    }
};

int main() {
    
    std::vector<int> v1 = {1,2,3,4,5,6};
    Solution s;
    s.rotateArray(v1, 3);
    for(auto e:v1) {
        std::cout << e << std::endl;
    }
    
    
}
