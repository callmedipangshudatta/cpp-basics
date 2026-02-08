# DAY 7 — Detailed Revision Day (Most Important)

Rules:
- No new learning
- No browsing
- No copying
- Only memory and explanation

Goal:
If I can explain clearly without notes, I truly understand the pattern.

---

# Pattern Recall

## Two Pointers (Strings)

### Trigger

Use when problem mentions:

- Palindrome
- Reverse
- Compare from both ends
- Pair of indices
- Symmetry

If characters must be checked from both sides → Two Pointers.

---

### Invariant

At every step:

- Characters before left pointer are already correct
- Characters after right pointer are already correct

Only middle part remains unchecked.

If mismatch appears → stop immediately.

---

### Pointer Movement

Initial:

left = 0  
right = n - 1

If match:

left++  
right--

If mismatch:

return false

Pointers never move backward.

---

### Time & Space

Time → O(n)  
Space → O(1)

Each character checked once. No extra memory.

---

## Sliding Window (Strings)

### Trigger

Look for:

- Substring
- Contiguous
- Longest / shortest
- Frequency / count
- At most k
- Without repeating

Substring almost always suggests Sliding Window.

---

### Invariant

The window always represents a valid or almost-valid substring.

If invalid:

Shrink until valid again.

Window is never allowed to remain invalid.

---

### Pointer Movement

Right pointer → Expand  
Left pointer → Shrink

Flow:

1. Add character
2. Update frequency
3. Check constraint
4. If broken → shrink
5. Restore validity
6. Update answer

Cycle:

Expand → Break → Shrink → Restore → Update

---

### Time & Space

Time → O(n)

Right moves n times  
Left moves at most n times

Space → O(1) or O(k)

Frequency array or hashmap.
