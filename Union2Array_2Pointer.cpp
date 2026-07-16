#include <iostream>
#include<vector>
using namespace std;

#include<bits/stdc++.h>
class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {

        int n1 = nums1.size();
        int n2 = nums2.size();
        int i =0;
        int j =0;

        std::vector<int> unionArray;

        while(i<n1 && j<n2) {
            if(nums1[i]<=nums2[j]) {
                if(unionArray.size() ==0 || unionArray.back()!= nums1[i]) {
                    unionArray.push_back(nums1[i]);
                }
                i++;
            }
            else
                 if(nums2[j]<=nums1[i]) {
                if(unionArray.size() ==0 || unionArray.back()!= nums2[j]) {
                    unionArray.push_back(nums2[j]);
                }
                j++;
            }
        }
        while(j<n2) {
                    if(unionArray.size() ==0 || unionArray.back()!= nums2[j]) {
                    unionArray.push_back(nums2[j]);
                }
                j++;

        }
        while(i<n1) {
                    if(unionArray.size() ==0 || unionArray.back()!= nums1[i]) {
                    unionArray.push_back(nums1[i]);
                }
                i++;

        }

        return unionArray;
    }

    
};

int main() {
    
    std::vector<int> v1 = {1,1,2,3,4,5};
    std::vector<int> v2 = {2,3,3,4,5,6,7};
    std::vector<int> v3;
    
    Solution s;
    v3 = s.unionArray(v1, v2);
    for(auto e:v3) {
        std::cout << e << std::endl;
    }
    
    
}
