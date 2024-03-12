class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> rotatedArray(n);
        for (int i = 0; i < n; i++) {
            int newIndex = (i + k) % n;
            rotatedArray[newIndex] = nums[i];
        }
        nums = rotatedArray;
    }
};
