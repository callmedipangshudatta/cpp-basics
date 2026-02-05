# Day 5 – Two Pointers (Sorted + Unsorted)

## Problems Solved

---

### Pointer Types (Important)

#### 1. Same Direction (Slow / Fast)
Used when:
- Removing elements
- Compacting array in-place
- Preserving order

Rule:
- Fast scans every element
- Slow writes only valid elements

---

#### 2. Opposite Direction (Left / Right)
Used when:
- Array is sorted
- You are optimizing a value (max/min)

Rule:
- Move the pointer that limits the answer

---

### Why Pointer Movement Must Be Rule-Based
Random pointer movement leads to missed cases.
Correct pointer movement is always based on:
- What limits the current answer
- What can possibly improve it

---

### 1. LeetCode 11 – Container With Most Water

**Pattern:**  
Two Pointers (Opposite Direction)

**Why this pattern?**  
Width decreases as pointers move inward.
To increase area, height must increase.

**Pointer Movement Rule:**  
Move the pointer with the **smaller height**  
(because it limits the area).

**Core Idea (Simple):**
- Start with left = 0, right = n-1
- Calculate area
- Move the shorter side inward

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 2. LeetCode 26 – Remove Duplicates from Sorted Array

**Pattern:**  
Two Pointers (Same Direction – Slow/Fast)

**Why this pattern?**  
Array is sorted, duplicates are adjacent.

**Core Idea (Simple):**
- Fast pointer scans array
- Slow pointer stores unique elements
- Overwrite duplicates in-place

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### 3. LeetCode 128 – Longest Consecutive Sequence

#### ❌ Sorting Approach
- Time: O(n log n)
- Breaks O(n) requirement

#### ✅ Optimal Approach

**Pattern:**  
HashSet + Linear Scan

**Why HashSet?**  
We only start counting when the current number
is the **start of a sequence**.

**Core Idea (Simple):**
- Insert all numbers into a set
- For each number:
  - If (num - 1) doesn’t exist → start sequence
  - Count forward using num +
