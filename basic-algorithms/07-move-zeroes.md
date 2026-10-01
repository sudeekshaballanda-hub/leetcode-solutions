## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

A position pointer is used to keep track of where the next non-zero element should be placed. The array is traversed once, and non-zero elements are moved toward the beginning while preserving their relative order. The remaining positions contain zeroes.

### Local Test Cases

#### Test Case 1 - Typical Case

Input:
```text
[0, 1, 0, 3, 12]