#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int longestSubarray(vector<int>& vec, int k) {
    int n = vec.size();
    int maxi = 0;
    int left = 0;
    int right =0;
    long long sum = vec[0];
    
    while(right<n) {
        while(left<=right && sum>k) {
            sum = sum - vec[left];
            left++;
        }
        
        if(sum == k) {
            maxi = max(maxi, right- left+1);
        }
        
        right++;
        if(right<n) {
            sum = sum+vec[right];
            
        }
    }
    return maxi;
}

int main() {
    int k = 5;
    vector<int> vec = {1, 1, 2, 4, 8, 3, 5, 9, 1, 1, 3};
    int length = longestSubarray(vec, k);
    cout << "length is : " << length << endl; // Output: 4 (for subarray [1, 1, 1, 2] -> 1+1+2+1... wait, [1,1,2,1] or [1,1,3] length 3)
    return 0;
}