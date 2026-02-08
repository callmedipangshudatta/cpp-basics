# DAY 7 — Detailed Revision Day (MOST IMPORTANT)

No new learning.  
No browsing.  
No copying.  

This day is for proving that the patterns are fully understood from memory.

Goal:

If you can explain clearly without notes, you truly understand the logic.

---

## TOKEN-1 — Active Recall (1 Hour)

Speak aloud while revising.  
Interviews test verbal clarity, not silent thinking.

---

## 1️⃣ Pattern Recall

Explain both patterns from memory.

---

### Two Pointers (Strings)

#### Trigger

Use Two Pointers when the problem mentions:

- Palindrome
- Reverse string
- Compare from both ends
- Symmetry
- Pair checking

If characters must be checked from left and right together, consider Two Pointers.

---

#### Invariant

At every step:

- Characters before the left pointer are already verified
- Characters after the right pointer are already verified

Only the middle region remains unchecked.

If mismatch appears, the condition fails immediately.

---

#### Pointer Movement

Initial:

left = 0  
right = n - 1

If characters match:

left++  
right--

If mismatch:

Return false.

Pointers never move backward.

---

#### Time & Space

Time → O(n)  
Space → O(1)

Each character is checked once with no extra memory.

---

### Sliding Window (Strings)

#### Trigger

Look for:

- Substring
- Contiguous
- Longest or shortest
- Frequency or count
- At most k
- Without repeating

Continuous range inside a string usually suggests Sliding Window.

---

#### Invariant

The window always represents a valid or almost-valid substring.

If invalid:

Shrink until validity is restored.

The window must never remain invalid.

---

#### Pointer Movement

Right pointer expands the window.  
Left pointer shrinks the window.

Flow:

1. Add new character
2. Update frequency
3. Check constraint
4. If broken, shrink
5. Restore validity
6. Update answer

Cycle:

Expand → Break → Shrink → Restore → Update

---

#### Time & Space

Time → O(n)

Right moves at most n times.  
Left moves at most n times.

Space → O(1) or O(k)

Frequency storage is limited.

---

## 2️⃣ Dry-Run Recall (From Memory)

Explain pointer movement without code.

- One palindrome example
- One sliding window example

Focus on:

- Why pointers move
- When shrinking starts
- When answer updates

---

## 🎯 Goal of Day 7

After this session you should:

- Explain both patterns without notes
- State invariants confidently
- Describe pointer movement clearly
- Justify O(n) without hesitation
- Speak logic calmly like in an interview

Understanding → Confidence → Control under pressure
