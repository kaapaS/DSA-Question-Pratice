#include <unordered_map>
#include <unordered_set>
#include <vector>
class Solution{
    public: bool uniqueOccurrences(std::vector<int>& arr) {
    std::unordered_map<int, int> count;
    std::unordered_set<int> uniqueCounts;

    // Count occurrences of each value
    for (int num : arr) {
        count[num]++;
    }

    // Check if the counts are unique
    for (const auto& pair : count) {
        if (!uniqueCounts.insert(pair.second).second) {
            return false; // Duplicate occurrence count found
        }
    }

    return true;
}

};
