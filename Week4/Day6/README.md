DAY 6 — Sliding Window (PATTERN LOCK)
TOKEN-1 — ONE PAGE FINAL (1 Hour)

This page is the final memory sheet for the Sliding Window pattern.
Read slowly and try to recall the full logic without seeing code.

Rule:
This must remain a one-page summary.
If it becomes long, rewrite shorter.

1️⃣ Pattern Trigger Recognition

Certain keywords immediately suggest Sliding Window.

🔑 Trigger Keywords

substring

contiguous

longest / shortest

frequency / count

at most / at least

without repeating

If the problem talks about a continuous range inside a string or array, Sliding Window should be the first pattern to consider.

Reason:

Brute force checks all substrings → O(n²)
Sliding Window keeps a moving range → O(n)

2️⃣ Fixed Window vs Variable Window
🧱 Fixed Window

Window size = k

Left and right move together

Size never changes

Used when:

Problem explicitly gives window size

Example: “substring of size k”

🌊 Variable Window

Window size changes.

Expand until condition breaks

Shrink to restore validity

Used when:

Problem asks for longest or smallest substring

Uses “at most k”

Uses “without repeating”

Identification Rule

“size k” → Fixed Window
“longest / smallest valid substring” → Variable Window

3️⃣ Expand → Shrink Logic
Expanding the Window

Move the right pointer.

Include new character

Update frequency or count

Check if constraint is satisfied

When Constraint Breaks

Window may become temporarily invalid.
This is expected behavior.

Shrinking the Window

Move the left pointer.

Remove character

Decrement frequency

Continue shrinking until constraint becomes valid again

Updating the Answer

Update only when:

Window is valid

Constraint satisfied

Cycle followed in every problem:

Expand → Break → Shrink → Restore → Update

4️⃣ Core Invariant

Write and remember:

“At every step, the window represents a valid or almost-valid substring according to the problem constraint.”

Almost-valid means:

Temporary violation is allowed

Shrinking restores validity

The invariant must never remain broken.

5️⃣ Time & Space Complexity
Time Complexity

Right pointer moves at most n times

Left pointer moves at most n times

Total operations ≈ 2n → O(n)

There is no true nested loop.

Space Complexity

We store character frequency.

Typical limits:

26 lowercase letters

128 ASCII

Space → O(1) or O(k)

Acceptable for interview problems.

6️⃣ Classic Problems

Longest Substring Without Repeating Characters

Longest Repeating Character Replacement (424)

These cover:

Duplicate handling

“At most k” condition

Variable window mastery

🎯 Goal of Day 6

After this page you should:

Recognize Sliding Window within seconds

Decide fixed vs variable correctly

Recall expand–shrink cycle from memory

Explain O(n) confidently

Approach medium problems without hesitation

Pattern locked → Execution becomes easier.