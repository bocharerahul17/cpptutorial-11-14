#include<iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {

        int n = nums.size();
        k = k%n;

        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
        reverse(nums.begin(), nums.end());

    }
};

int main() {
    
    std::vector<int> v1 = {1,2,3,4,5,6};
    Solution s;
    s.rotateArray(v1, 10);
    for(auto e:v1) {
        std::cout << e << std::endl;
    }
    
    
}
