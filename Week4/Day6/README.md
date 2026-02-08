DAY 6 — Sliding Window (PATTERN LOCK)
TOKEN-1 — ONE PAGE FINAL (1 Hour)

Rule:
This must fit in ONE PAGE ONLY.
If it becomes long → rewrite shorter.

STRING — SLIDING WINDOW (FINAL)
1️⃣ Trigger Words (Pattern Recognition)

If the problem mentions:

🔑 Keywords

substring

contiguous

longest / shortest

frequency / count

at most / at least

without repeating

Immediate thought:

Continuous range inside string → Try Sliding Window first.

Reason:

Brute force substrings = O(n²)
Sliding Window avoids rechecking = O(n)

2️⃣ Fixed vs Variable (Decision Rule)
🧱 Fixed Window

Window size = k

Left and right move together

Size never changes

Used when:

“Substring of size k”

“Window length k”

🌊 Variable Window

Window size changes.

Expand until condition breaks

Shrink to restore validity

Used when:

Longest substring

Smallest valid substring

At most k

Without repeating

Quick Identification

“size k” → Fixed
“longest / smallest valid” → Variable

3️⃣ Expand → Shrink Logic
Expand

Move right pointer

Add new character

Update frequency / count

Check:

Is constraint satisfied?

If Broken

Window becomes temporarily invalid.

This is normal.

Shrink

Move left pointer

Remove character

Decrement frequency

Continue until window becomes valid again

Update Answer

Only when window is valid.

Cycle:

Expand → Break → Shrink → Restore → Update

4️⃣ Core Invariant

Write and remember:

At every step, the window represents a valid or almost-valid substring according to the constraint.

“Almost-valid”:

Temporary violation allowed

Shrinking fixes it

Invariant must never remain broken.

5️⃣ Time & Space Complexity
Time

Right moves n times

Left moves at most n times

Total ≈ 2n
→ O(n)

No true nested loops.

Space

Frequency storage:

26 letters / 128 ASCII

Space → O(1) or O(k)

Acceptable for interviews.

6️⃣ Two Classic Problems

Longest Substring Without Repeating Characters

Longest Repeating Character Replacement (424)

These cover:

Duplicate handling

“At most k” condition

Variable window mastery

🎯 Goal of Day 6

After this page you should:

Recognize Sliding Window in under 5 seconds

Decide Fixed vs Variable instantly

Recall expand–shrink cycle from memory

Explain O(n) without hesitation