## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

The first string is initially considered as the possible prefix. Each remaining string is compared with it character by character. The prefix length is reduced whenever the characters do not match.

### Local Test Cases

#### Test Case 1 - Typical Case

Input:
```text
["flower", "flow", "flight"]