## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

The minimum stock price seen so far is maintained while traversing the array. For every price, the possible profit from selling on that day is calculated. The maximum profit found during the traversal is returned.

### Local Test Cases

#### Test Case 1 - Typical Case

Input:
```text
prices = [7, 1, 5, 3, 6, 4]