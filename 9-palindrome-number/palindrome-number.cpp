class Solution {
public:
    bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;
    int reversedNumber = 0, originalNumber = x;
    while (x > 0) {
        if (reversedNumber > (INT_MAX - (x % 10)) / 10) return false; 
        reversedNumber = reversedNumber * 10 + (x % 10);
        x /= 10;
    }
    return reversedNumber == originalNumber;
}
};