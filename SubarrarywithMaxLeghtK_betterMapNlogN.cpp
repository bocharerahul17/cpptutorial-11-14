#include <iostream>
#include <vector>
#include <algorithm>
#include<map>

using namespace std;

int longestSubarray(vector<int>& vec, int k) {
    int n = vec.size();
    int maxi = 0;
    map<long long, int> prefixsum;
    int sum;
    int length =0;
    
    for(int i =0 ; i<n; i++) {
        sum = sum+ vec[i];
        if(sum ==k){
            maxi = max(length, i+1);
        }
        
        int rem = sum -k;
        
        if(prefixsum.find(rem)!= prefixsum.end()) {
            
            maxi = max(maxi , i- prefixsum[rem]);
        }
        
        if(prefixsum.find(sum) ==prefixsum.end()) {
           
           prefixsum[sum] =i; 
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