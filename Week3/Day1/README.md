# Day 1 – Arrays (Prefix Sum)

## LeetCode 724 – Find Pivot Index

### Pattern
Prefix Sum / Running Sum (Array)

---

### Why this pattern?
The problem asks for an index where:
- sum of elements on the left
- equals sum of elements on the right

Instead of recomputing sums for every index (which is slow),
we keep track of:
- total sum of the array
- running left sum while iterating

---

### Core Idea (Simple)
1. Compute the total sum of the array.
2. Initialize `leftSum = 0`.
3. Iterate through the array:
   - Right sum = totalSum − leftSum − current element
   - If leftSum == rightSum → pivot index found
4. Update leftSum by adding current element.

---

### Time Complexity
O(n)

### Space Complexity
O(1)

---

### Key Insight
At each index, the right side sum can be derived
without extra loops using the total sum.
