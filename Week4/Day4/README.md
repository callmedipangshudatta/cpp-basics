# DAY 4 — Sliding Window (FOUNDATION)
## TOKEN-1 — Learning (1 Hour, NO CODE)

This document explains the **Sliding Window** pattern in simple words.
Read slowly. Do NOT jump to code.

---

## 1️⃣ Pattern Trigger Recognition

Certain keywords immediately suggest **Sliding Window**:

### 🔑 Trigger Keywords
- substring
- contiguous
- longest / shortest
- frequency / count
- at most / at least

If the problem talks about a **continuous range** inside an array or string,
Sliding Window is the first pattern to consider.

---

### ❓ Why “substring” implies Sliding Window
- A substring is **contiguous**
- Brute force checks all substrings → O(n²)
- Sliding Window keeps a **moving range**, avoiding rework

This reduces time to **O(n)**.

---

## 2️⃣ Fixed Window vs Variable Window

### 🧱 Fixed Window
- Window size = `k`
- Left and right always move together
- Size never changes

Used when:
- Problem explicitly gives window size
- Example: “substrings of size k”

---

### 🌊 Variable Window
- Window size changes
- Expand until condition breaks
- Shrink to restore validity

Used when:
- Problem asks for longest / shortest
- Uses “at most k”, “no more than”, “without repeating”

---

### 🧠 How to Identify from Problem Statement
- “size k” → Fixed Window
- “longest / smallest valid substring” → Variable Window

---

## 3️⃣ Window Mechanics (CRITICAL)

### 🔹 What does `left` mean?
- Start of the current window
- Controls shrinking

### 🔹 What does `right` mean?
- End of the current window
- Controls expansion

---

### 🔄 Expanding the Window
- Move `right`
- Include new character
- Update frequency / count
- Check if condition breaks

---

### 🔄 Shrinking the Window
- Move `left`
- Remove character
- Restore validity
- Continue until condition holds again

---

## 4️⃣ Frequency Map Logic

### ❓ Why strings need maps
- Strings have repeating characters
- We must track **counts**, not just presence

---

### ➕ When Expanding
- Add `s[right]`
- Increment frequency
- Update condition status

---

### ➖ When Shrinking
- Remove `s[left]`
- Decrement frequency
- Restore validity

---

### 🧹 Zero-Count Cleanup
- Sometimes optional
- Important when map size matters
- Avoids incorrect window size logic

---

## 5️⃣ Core Invariant (WRITE THIS)

> **"At every step, the window represents a valid or almost-valid substring according to the problem constraint."**

---

### 🧠 What “almost-valid” means
- Window may temporarily break the rule
- Shrinking is used to fix it

---

### ❓ Why Shrinking Restores Validity
- Removing characters reduces frequency / count
- Eventually the constraint becomes satisfied again

Invariant is always protected.

---

## 6️⃣ Dry Runs (MANDATORY)

### Dry-run 1: `"abcabcbb"`
Track:
- window range
- frequency map
- left movement
- answer updates

Understand:
- Why duplicates force shrinking
- Why answer updates only when valid

---

### Dry-run 2: Fixed Window Example
Example:
- size = 3
- slide window
- count condition per window

---

## ⛔ If Dry Run Is Unclear → STOP
Sliding Window without dry run = confusion later.

---

## 🎯 Goal of Day 4
- Recognize Sliding Window instantly
- Decide fixed vs variable correctly
- Maintain invariant confidently

Understanding > Speed
