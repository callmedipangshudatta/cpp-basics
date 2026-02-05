# DAY 2 — Two Pointers (RECALL + DEPTH)
## TOKEN-1 — Recall (1 Hour, FROM MEMORY)

This document is about **recall**, not learning.
Do NOT look at code.
Everything must come from your head.

---

## 1️⃣ Pattern Summary

### 🔹 Pattern Name
**Two Pointers**

### 🔹 One-Line Description
Use two indices moving toward each other to compare or process elements efficiently in one pass.

### 🔹 Where It Is Used
- Palindrome checking
- Reversing strings or arrays
- Comparing elements from both ends
- Skipping unwanted characters
- Optimizing brute force comparisons

If the problem involves **symmetry or pair comparison**, think Two Pointers.

---

## 2️⃣ Universal 5-Step Thinking Template

Before touching code, answer these five questions:

### 1️⃣ What do `left` and `right` represent?
- `left` → start of the structure
- `right` → end of the structure

They represent the **current characters or elements under inspection**.

---

### 2️⃣ What is the valid character condition?
- Only letters and digits?
- Case-insensitive or not?
- Should symbols be ignored?

Define this clearly before comparing.

---

### 3️⃣ What is the comparison logic?
- Compare `s[left]` and `s[right]`
- Only after skipping invalid characters
- Normalize if required (lowercase/uppercase)

Never compare raw input blindly.

---

### 4️⃣ How should pointers move?
- Match → move both inward
- Invalid left → move left
- Invalid right → move right
- Mismatch → apply decision logic

Pointers must **never move backward**.

---

### 5️⃣ When does the loop terminate?
- When `left >= right`
- All required comparisons are complete
- Invariant is preserved

---

## 3️⃣ Mismatch Handling Logic

### ❌ When Characters Don’t Match
- Normal palindrome → return false
- Special cases (like delete one char) → decision needed

---

### 🌱 When Branching Is Allowed
Branching is allowed **only when explicitly permitted** by the problem.
Example:
- "You may delete at most one character"

---

### ⚠️ Why At Most One Decision Split Is Allowed
- More than one split = exponential paths
- Breaks O(n) guarantee
- Problem constraint usually limits this

After one deletion, the remaining substring **must be a palindrome**.

---

## 4️⃣ Common Traps (VERY IMPORTANT)

Avoid these mistakes:

1. Comparing characters **before skipping invalid ones**
2. Forgetting **case normalization**
3. Mishandling indices after a mismatch
4. Moving only one pointer when both should move
5. Breaking the invariant by revisiting characters
6. Assuming recursion is needed
7. Using extra space when not required

Most wrong answers come from these traps.

---

## 5️⃣ Time & Space Analysis (Explain in Words)

### ⏱ Why Time Complexity Is O(n)
- Each pointer moves forward only
- No character is processed more than once
- No nested loops

---

### 💾 Why Space Complexity Is O(1)
- No extra data structures
- Only pointers and temporary variables
- Input is processed in-place

---

### 🚫 Why Recursion Is Usually Unnecessary
- Two pointers already handle traversal
- Recursion adds stack overhead
- Iterative logic is clearer and safer

---

## TOKEN-2 — Problems (1 Hour)

Solve from memory, then verify:

- 125. Valid Palindrome (Repeat)
- 917. Reverse Only Letters
- 2108. Find First Palindromic String in the Array

Focus on:
- Trigger recognition
- Pointer movement
- Invariant protection

---

## 🎯 Goal of Day 2
- Think without code
- Explain logic clearly
- Avoid traps automatically
- Build interview confidence

If recall feels weak → repeat Day 1.
Depth beats speed.
