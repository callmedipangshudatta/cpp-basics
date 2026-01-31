# Day 2 – Prefix Sum (No HashMap)

## Problems Solved

---

### 1. LeetCode 303 – Range Sum Query (Immutable)

**Pattern:**  
Prefix Sum + Precomputation

**Why this pattern?**  
The array does not change and there are multiple range sum queries.
Computing sums repeatedly would be inefficient.

**What prefix sum stores:**  
prefix[i] stores the sum of elements from index 0 to i-1.

**Why prefix[r+1] - prefix[l]?**  
prefix[r+1] gives sum till r  
prefix[l] removes sum before l  
Remaining value is sum from l to r.

**Core Idea (Simple):**
- Precompute prefix sum array once
- Answer each query using subtraction

**Time Complexity:**  
- Preprocessing: O(n)  
- Query: O(1)

**Space Complexity:**  
O(n)

**Key Insight:**  
Prefix sum converts repeated range queries into constant time operations.

---

### 2. LeetCode 724 – Find Pivot Index

**Pattern:**  
Prefix Sum Logic using Running Sum  
(left sum vs right sum)

**Why this pattern?**  
We need an index where the sum of elements on the left
equals the sum of elements on the right.

**Core Idea (Simple):**
- Compute total sum of array
- Maintain leftSum while traversing
- Right sum = totalSum − leftSum − current element
- If leftSum == rightSum → pivot index found

**Why running sum instead of prefix array?**  
Only one pass comparison is required.
No need to store the full prefix array.

**Time Complexity:**  
O(n)

**Space Complexity:**  
O(1)

**Key Insight:**  
Running sum is an optimized form of prefix sum when no queries exist.
