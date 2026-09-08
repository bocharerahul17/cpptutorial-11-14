#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int longestSubarray(vector<int>& vec, int sum) {
    int n = vec.size();
    int maxi = 0;

    for (int i = 0; i < n; i++) {
        int total = 0;
        for (int j = i; j < n; j++) {
             // Reset sum for each subarray [i ... j]
            
            total += vec[j];
            
            if (total == sum) {
                maxi = max(maxi, j - i + 1); // Updates the function-level maxi
            }
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