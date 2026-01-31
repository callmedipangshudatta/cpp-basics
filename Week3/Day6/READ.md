# Day 6 – Revision (Two Pointers)

## Problems Revised

---

### 1. LeetCode 11 – Container With Most Water

**Pattern:**  
Two Pointers (Opposite Direction)

**Why this pattern works:**  
The area is limited by the shorter height.
Width always decreases as pointers move inward.

**Pointer Movement Rule:**  
Move the pointer with the smaller height  
(because moving the taller one cannot improve the area).

**Key Lock:**  
Never guess pointer movement — always move the limiting factor.

---

### 2. LeetCode 26 – Remove Duplicates from Sorted Array

**Pattern:**  
Two Pointers (Same Direction – Slow / Fast)

**Why this pattern works:**  
Array is sorted, so duplicates are adjacent.

**Pointer Roles:**
- Fast → scans every element
- Slow → writes only unique elements

**Key Lock:**  
Slow pointer always represents the length of the valid array.

---

### 3. LeetCode 27 – Remove Element

**Pattern:**  
Two Pointers (Same Direction – In-place Compaction)

**Why this pattern works:**  
We only care about keeping valid elements in the front.

**Core Rule:**  
Overwrite unwanted values instead of deleting them.

**Key Lock:**  
In-place problems usually mean slow/fast pointers.

---

### 4. LeetCode 128 – Longest Consecutive Sequence

**Pattern:**  
HashSet + Linear Scan

**Why sorting fails:**  
Sorting breaks O(n) constraint.

**Correct Rule:**  
Only start counting when `(num - 1)` does NOT exist.

**Why this avoids repetition:**  
Each sequence is counted exactly once.

**Key Lock:**  
Detect sequence starts, not middle elements.

---

## Final Mental Summary (VERY IMPORTANT)

- **Opposite pointers → optimization problems**
- **Same direction pointers → filtering / compaction**
- **Pointer movement must be rule-based**
- **LC-128 → start only from sequence beginnings**
