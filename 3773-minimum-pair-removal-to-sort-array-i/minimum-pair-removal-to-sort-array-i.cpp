class Solution {
public:

    bool isNonDecreasing(const vector<int>& nums) {
        for (int i = 1; i < nums.size(); ++i)
            if (nums[i] < nums[i - 1])
                return false;
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int ops = 0;

    while (true) {
        int minSum = INT_MAX;
        int index = -1;
        bool sorted = true;

        // Find leftmost adjacent pair causing disorder and having the min sum
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) sorted = false;
            int pairSum = nums[i] + nums[i + 1];
            if (pairSum < minSum) {
                minSum = pairSum;
                index = i;
            }
        }

        // If already sorted, we're done
        if (sorted) break;

        // Merge the pair at 'index'
        nums[index] = nums[index] + nums[index + 1];
        nums.erase(nums.begin() + index + 1);
        ops++;
    }

    return ops;
    }
};