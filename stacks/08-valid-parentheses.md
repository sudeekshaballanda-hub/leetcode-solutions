## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

A stack is used to keep track of opening brackets. Whenever a closing bracket is encountered, it is compared with the most recently added opening bracket. If the brackets do not match, the string is invalid. At the end, the stack must be empty for the string to be valid.

### Local Test Cases

#### Test Case 1 - Typical Case

Input:
```text
()[]{}