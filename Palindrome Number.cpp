class Solution {
public:
    bool isPalindrome(int x) {
        // Handle negative numbers (they can't be palindromes)
        if (x < 0) return false;
        
        // Handle special case: single digit numbers are always palindromes
        if (x >= 0 && x < 10) return true;
        
        // Handle numbers ending with 0 (except 0 itself)
        if (x % 10 == 0 && x != 0) return false;
        
        int revNum = 0;
        
        // Only reverse half the number
        while (x > revNum) {
            revNum = revNum * 10 + x % 10;
            x /= 10;
        }
        
        // For odd-length palindromes, we need to remove the middle digit
        // For example, 12321 becomes x=12, revNum=123
        // So we need to check x == revNum / 10
        return x == revNum || x == revNum / 10;
    }
};
