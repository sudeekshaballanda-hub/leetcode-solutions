## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

Binary search is used because the input array is sorted. Two pointers represent the current search range, and the middle element is checked in each iteration. Depending on the comparison with the target, half of the search space is eliminated.

### Local Test Cases

#### Test Case 1 - Typical Case

Input:
```text
nums = [-1, 0, 3, 5, 9, 12]
target = 9