class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result(rowIndex + 1, 1);

        for (int row = 1; row <= rowIndex; ++row) {
            for (int index = row - 1; index > 0; --index) {
                result[index] += result[index - 1];
            }
        }

        return result;
    }
};