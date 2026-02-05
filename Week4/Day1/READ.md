# DAY 1 — Two Pointers (FOUNDATION)
## TOKEN-1 — Learning (1 Hour, NO CODE)

This document explains the **Two Pointers** pattern in simple words.
Read it slowly. Do not rush.  
If anything feels unclear, STOP and re-read.

---

## 1️⃣ Pattern Trigger Recognition (VERY IMPORTANT)

Some problem statements immediately tell you:
👉 **Two pointers should be used.**

### 🔔 Common Trigger Phrases
If you see statements like these, think **Two Pointers**:
- "Check if palindrome"
- "Compare characters from both ends"
- "Ignore non-alphanumeric characters"
- "Reverse string" / "Reverse words"
- "Check symmetry"

These problems usually involve:
- Looking at the **start and end together**
- Moving **inward**
- Making decisions based on **pair comparison**

---

### ❌ Why Brute Force Fails
Brute force usually means:
- Nested loops
- Re-checking the same characters again and again
- Time complexity becomes **O(n²)**

Example problem:
> Check if a string is palindrome

Brute force compares every possible pair → wasteful.  
Two pointers do it in **one pass (O(n))**.

---

## 2️⃣ Pointer Setup & Movement Rules

### 🔧 Initial Setup
- `left = 0`
- `right = n - 1`
- Loop condition: `left < right`

This ensures:
- No extra comparisons
- No going out of bounds

---

### 🔁 Pointer Movement Rules

Inside the loop:

1. **If both characters are valid**
   - Compare them
   - Move both pointers inward

2. **If left character is invalid**
   - Move `left++`

3. **If right character is invalid**
   - Move `right--`

---

### 🚫 Why Pointers Never Move Backward
Once a character is checked:
- It is **done**
- It never needs to be revisited

This is why:
- Time stays O(n)
- Logic stays clean
- No confusion

---

## 3️⃣ Character Handling Logic

### 🔤 Lowercase vs Uppercase
- `'A'` and `'a'` should be treated the same
- Always normalize before comparing

---

### 🔢 Alphanumeric Filtering
- Ignore spaces
- Ignore punctuation
- Only compare letters and digits

Skipping characters:
- Does NOT break correctness
- Because they are irrelevant to palindrome logic

---

### 🧠 Why Skipping Characters is Safe
Palindrome cares about **order**, not formatting.
Ignoring symbols still preserves symmetry.

---

## 4️⃣ Core Invariant (WRITE THIS EXACTLY)

> **"At any point, all characters outside the left and right pointers are already validated and will never be revisited."**

### 🧩 Why This Invariant Guarantees Correctness
- Everything outside is already checked
- Current pointers are the only uncertainty
- Moving inward never breaks past correctness

This invariant is the backbone of the pattern.

---

## 5️⃣ Dry Run (MANDATORY)

### Example:
"A man, a plan, a canal: Panama"


Track manually:
- left index
- right index
- characters being compared
- pointer movement decision

---

### 🧪 Important Rule
⚠️ **Comparison must happen ONLY after skipping invalid characters**

If you compare before skipping:
- Logic breaks
- False mismatches happen

---

### Additional Dry Runs (Must Do)
- `""` → true
- `"a"` → true
- `"ab"` → false

Explain to yourself:
- Why loop runs or doesn’t run
- Why result makes sense

---

## ⛔ If Dry Run is Unclear → STOP
Do NOT move to code.
Do NOT jump to next problem.
Understanding > speed.

---

## 🎯 Goal of TOKEN-1
- Recognize when Two Pointers applies
- Move pointers with confidence
- Protect the invariant
- Think like an interviewer


