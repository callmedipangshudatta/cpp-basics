# Day 3 – Prefix Sum + Hashing

## Problems Solved

---

### 1. LeetCode 560 – Subarray Sum Equals K

**Pattern:**  
Prefix Sum + Hash Map (Frequency Count)

---

### Why this pattern?
We need the number of subarrays whose sum equals k.
Because the array may contain negative numbers,
sliding window is not applicable.

Prefix sum helps track cumulative sums,
and hashing helps count how many times a required sum appears.

---

### Why `sum - k` works?
Let:
- `sum` = prefix sum till current index
- We want a subarray with sum = k

That means:
currentSum - previousSum = k
previousSum = currentSum - k


So if `(sum - k)` has appeared before,
a valid subarray exists ending at current index.

---

### Why `m[0] = 1`?
Before processing any elements:
- prefix sum = 0 (empty prefix)

This allows counting subarrays that start from index 0
and directly sum to k.

Without this, those subarrays would be missed.

---

### What is the hashmap counting?
The hashmap stores:


(prefix sum) → (number of times it has appeared)


This allows counting **multiple valid subarrays**
ending at the same index.

---

### Core Idea (Simple):
1. Initialize prefix sum = 0
2. Store frequency of prefix sums in hashmap
3. For each element:
   - Add to prefix sum
   - Check if `(sum - k)` exists in map
   - Add its frequency to answer
   - Update map with current sum

---

### Time Complexity:
O(n)

### Space Complexity:
O(n)

---

### Key Insight:
Hashmap enables counting, not just checking existence.
This is the key difference from basic prefix sum problems.

---

### 2. LeetCode 121 – Best Time to Buy and Sell Stock

**Pattern:**  
Running Minimum / One Pass Array

**Why this problem today?**  
Reinforces prefix-style thinking using running values
without hashing.

**Core Idea (Simple):**
- Track minimum price so far
- At each step, calculate profit
- Update maximum profit

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### Revision
Revisited:
- **LeetCode 303 – Range Sum Query (Immutable)**
- Reinforced prefix sum subtraction logic