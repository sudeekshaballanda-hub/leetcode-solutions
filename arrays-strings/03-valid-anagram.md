## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

A frequency array is used to count the occurrences of characters in the first string. The counts are then decreased using the second string. If all character counts become zero, the two strings are anagrams.

### Local Test Cases

#### Test Case 1 - Typical Case

Input:
```text
s = "anagram"
t = "nagaram"