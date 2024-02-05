class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;

        // Move non-zero elements to the front of the array
        for (int j = 0; j < n; j++) {
            if (nums[j] != 0) {
                // Swap non-zero element to the front
                if (i != j) {
                    swap(nums[i], nums[j]);
                }
                i++;
            }
        }
    }
};
