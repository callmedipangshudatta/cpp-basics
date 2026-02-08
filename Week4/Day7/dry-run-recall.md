# Day 7 — Dry Run Recall

Goal:  
Explain pointer movement clearly without using code.

---

## Two Pointers Dry Run

Example: "racecar"

Step 1:

left = r  
right = r  
Match → move inward

Step 2:

a vs a → match  
Move inward

Continue until pointers cross.

Observation:

- Outer characters are already confirmed correct
- Only the middle region is being checked

Stopping Condition:

If left >= right → palindrome confirmed  
If mismatch appears → not palindrome

---

## Sliding Window Dry Run

Example: Longest Substring Without Repeating Characters

String: "abcabcbb"

Step 1:

Add 'a' → valid → answer = 1

Step 2:

Add 'b' → valid → answer = 2

Step 3:

Add 'c' → valid → answer = 3

Step 4:

Add 'a' → duplicate → window becomes invalid

Action:

Move left until duplicate is removed.

Window becomes valid again.  
Update answer only when valid.

Key Insight:

Duplicate character is the signal to shrink.

---

## Fixed Window Mini Recall

Example:

Window size = 3

Slide window:

- Add new element
- Remove old element
- Maintain count

Window size never changes.
