class Solution(object):
    def reverse(self, x):
        MAX_INT = 2**31 - 1
        MIN_INT = -2**31
        sign = -1 if x < 0 else 1
        x = abs(x)
        rev = 0
        
        while x != 0:
            digit = x % 10
            x //= 10  # Use floor division to remove the last digit
            
            # Check for overflow before appending the digit.
            if rev > MAX_INT // 10 or (rev == MAX_INT // 10 and digit > 7):
                return 0
            
            rev = rev * 10 + digit
        
        rev = rev * sign
        # Check final range (though it's usually covered in the loop)
        if rev < MIN_INT or rev > MAX_INT:
            return 0
        return rev

# Example usage:
sol = Solution()
print(sol.reverse(123))   # Expected output: 321
print(sol.reverse(-123))  # Expected output: -321
print(sol.reverse(120))   # Expected output: 21
