#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size()) return s;

        vector<string> rows(numRows);
        int row = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[row] += c;
            if (row == 0 || row == numRows - 1) goingDown = !goingDown;
            row += goingDown ? 1 : -1;
        }

        string result;
        for (string& r : rows) {
            result += r;
        }

        return result;
    }
};
