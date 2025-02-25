# LeetCode DSA Solutions

This repository contains my solutions to various Data Structures and Algorithms (DSA) problems from LeetCode, implemented in C++. The goal of this repository is to document my DSA learning journey and provide a reference for others studying algorithms.

## Repository Structure

The solutions are organized by problem categories:

```
├── Arrays
├── Strings
├── Linked Lists
├── Trees
├── Graphs
├── Dynamic Programming
├── Greedy Algorithms
├── Sorting and Searching
├── Recursion and Backtracking
├── Math
└── Miscellaneous
```

Each solution file includes:
- Problem description and link to the original LeetCode question
- My C++ solution
- Time and space complexity analysis
- Explanation of the approach used

## How to Use This Repository

1. Navigate to the relevant category folder
2. Find the problem by its LeetCode number or name
3. Review the solution and explanation

## Example Solution

```cpp
/**
 * LeetCode #9: Palindrome Number
 * https://leetcode.com/problems/palindrome-number/
 *
 * Determine whether an integer is a palindrome.
 * An integer is a palindrome when it reads the same backward as forward.
 * 
 * Time Complexity: O(log n) - We process half the digits in the number
 * Space Complexity: O(1) - We use a constant amount of extra space
 */

class Solution {
public:
    bool isPalindrome(int x) {
        // Handle negative numbers and numbers ending with 0
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;
        
        int revNum = 0;
        
        // Reverse half the number
        while (x > revNum) {
            revNum = revNum * 10 + x % 10;
            x /= 10;
        }
        
        // For odd-length palindromes, remove the middle digit
        return x == revNum || x == revNum / 10;
    }
};
```

## Progress Tracker

| Category | Solved | Total |
|----------|--------|-------|
| Easy     | 0      | 0     |
| Medium   | 0      | 0     |
| Hard     | 0      | 0     |
| Total    | 0      | 0     |

## Contribution

While this repository is primarily for personal use, suggestions and improvements are welcome. Please feel free to:

- Point out bugs or optimizations
- Suggest alternative approaches
- Recommend problems to solve

## Learning Resources

Here are some resources I've found helpful in my DSA journey:

- [Grokking Algorithms](https://www.manning.com/books/grokking-algorithms) by Aditya Bhargava
- [Introduction to Algorithms](https://mitpress.mit.edu/books/introduction-algorithms-third-edition) by Cormen, Leiserson, Rivest, and Stein
- [Back to Back SWE](https://www.youtube.com/channel/UCmJz2DV1a3yfgrR7GqRtUUA) YouTube channel
- [mycodeschool](https://www.youtube.com/user/mycodeschool) YouTube channel

## Contact

Feel free to connect with me on [LinkedIn](https://www.linkedin.com/in/your-profile/) or [Twitter](https://twitter.com/your-handle).

Happy Coding!
