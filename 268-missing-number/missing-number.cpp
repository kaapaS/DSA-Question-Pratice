#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        // XOR all numbers from 0 to n
        int xorExpected = 0;
        for (int i = 0; i <= n; i++) {
            xorExpected ^= i;
        }
        
        // XOR all numbers in the array
        int xorActual = 0;
        for (int num : nums) {
            xorActual ^= num;
        }
        
        // The result is the missing number
        return xorExpected ^ xorActual;
    }
};
