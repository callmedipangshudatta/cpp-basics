# Day 4 – Sliding Window & Two Pointers

## Problems Solved

---

### 1. LeetCode 643 – Maximum Average Subarray I

**Pattern:**  
Sliding Window (Fixed Window Size K)

**Why this pattern?**  
Window size is fixed (k).
We need the maximum sum of any subarray of size k.

**Core Idea (Simple):**
- Compute sum of first k elements
- Slide window:
  - add next element
  - remove element going out
- Track maximum sum

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

**Key Insight:**  
Fixed window → no shrinking logic needed.

---

### Fixed Window vs Variable Window

**Fixed Window**
- Window size is known (k fixed)
- Always move both pointers together

**Variable Window**
- Window size changes
- Expand when condition not met
- Shrink when condition satisfied

---

### When to Expand vs Shrink

- **Expand (right++)** when condition is not satisfied
- **Shrink (left++)** when condition is satisfied and you want optimization

---

### Why Sliding Window Fails with Negatives

Sliding window relies on monotonic behavior:
- expanding increases sum
- shrinking decreases sum

With negative numbers:
- removing elements may increase sum
- adding elements may decrease sum

That’s why **prefix sum + hashing** is needed (LC-560).

---

### 2. LeetCode 209 – Minimum Size Subarray Sum

**Pattern:**  
Sliding Window (Variable Size)

**Why this pattern?**  
All numbers are positive → window sum grows predictably.

**Core Idea (Simple):**
- Expand window until sum ≥ target
- Shrink window to minimize length

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 3. LeetCode 283 – Move Zeroes

**Pattern:**  
Two Pointers (In-place Swapping)

**Core Idea (Simple):**
- One pointer tracks position for non-zero
- Swap non-zero elements forward

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 4. LeetCode 26 – Remove Element (Revision)

**Pattern:**  
Two Pointers (Slow–Fast)

**Core Idea (Simple):**
- Fast pointer scans array
- Slow pointer stores valid elements
- Overwrite in place

---

### 5. LeetCode 918 – Maximum Sum Circular Subarray

**Pattern:**  
Kadane’s Algorithm + Circular Logic

**Core Idea (Simple):**
- Case 1: normal max subarray (Kadane max)
- Case 2: circular max = totalSum − Kadane min
- Answer = max(case1, case2)

**Important Edge Case:**  
If all numbers are negative, return Kadane max only.

---

### Revision
Revisited:
- **LeetCode 560 – Subarray Sum Equals K**
