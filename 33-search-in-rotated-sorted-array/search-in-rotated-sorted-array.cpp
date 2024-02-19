#include <vector>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int midVal = nums[mid];

            if (midVal == target) {
                return mid;
            }

            if (nums[left] <= midVal) { // Left half is sorted
                if (nums[left] <= target && target < midVal) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            } else { // Right half is sorted
                if (midVal < target && target <= nums[right]) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }

        return -1; // Target not found
    }
};
