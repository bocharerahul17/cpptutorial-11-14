#include <iostream>
#include <vector>

using namespace std;

        int& getvlue(std::vector<int>& vec, int idx ) {
            return vec[idx];
        }
        


int main() {

        std::vector<int> vec = {1,2,3,4,5};
        getvlue(vec, 2) =42;
}