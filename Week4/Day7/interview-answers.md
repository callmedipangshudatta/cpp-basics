# Day 7 — Interview Simulation Answers

---

## Why Not Brute Force?

Brute force checks:

- All substrings
- All pairs

Time ≈ O(n²)

Efficient approaches:

- Two Pointers → O(n)
- Sliding Window → O(n)

Reason:

We reuse previous computation instead of recalculating.

---

## What Breaks If Pointers Move Incorrectly?

### Two Pointers

- May skip mismatch
- Can falsely detect palindrome

### Sliding Window

- Window may remain invalid
- Frequency becomes incorrect
- Answer becomes wrong

Pointer discipline ensures correctness.

---

## What Invariant Maintains Correctness?

### Two Pointers

Outer region already verified.

### Sliding Window

Window is always valid or being restored.

Invariant is the safety rule that keeps logic correct.

---

## Worst-Case Complexity

### Two Pointers

Time → O(n)  
Space → O(1)

### Sliding Window

Time → O(n)  
Space → O(1) or O(k)

Pointers only move forward.

---

## How Would I Explain This to an Interviewer?

### Two Pointers

I compare characters from both ends and move inward while maintaining that the checked region is already correct.

### Sliding Window

I maintain a dynamic window that expands to explore and shrinks when constraints break, ensuring the window always represents a valid substring.
