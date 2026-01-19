# Day 7 Revision - Arrays + Hashing

## Goal
Re-solve problems from Day 1–6 without peeking. Focus on:
- Writing clean code
- Explaining the approach
- Understanding patterns

## Problems

### 1. Best Time to Buy and Sell Stock (121)
- **Pattern:** Single pass scan
- **Idea:** Track minimum price seen so far; calculate max profit at each step.
- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### 2. Maximum Subarray (53)
- **Pattern:** Local vs Global best (Kadane’s Algorithm)
- **Idea:** At each step, decide whether to extend the current subarray or start fresh.
- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### 3. Two Sum (1)
- **Pattern:** Array + Hash Map
- **Idea:** Track previously seen elements in a hash map to find complement.
- **Time Complexity:** O(n)
- **Space Complexity:** O(n)
