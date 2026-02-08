DAY 5 — Sliding Window (RECALL + TRAPS)
TOKEN-1 — Recall (1 Hour, NO CODE)

This document reinforces the Sliding Window pattern from memory.
Read slowly. Try to recall the full flow without looking at code.

1️⃣ Sliding Window Template (Logic Only)

Every Sliding Window problem follows the same cycle.

🔄 Expand Condition

Move the right pointer.

Purpose:

Include a new element inside the window

Increase window size

Update frequency or count

Steps:

Add s[right]

Increment frequency

Check if constraint is still valid

⚠️ When the Window Becomes Invalid

The new element may cause:

Duplicate character

Frequency exceeding limit

Replacement count exceeding k

This temporary violation is normal.

🔽 Shrink Condition

Move the left pointer.

Purpose:

Remove extra characters

Restore validity

Steps:

Remove s[left]

Decrement frequency

Continue shrinking until constraint becomes valid again

🎯 When to Update the Answer

Update only when:

Window is valid

Constraint is satisfied

Common updates:

Maximum length

Minimum length

Maximum count

Updating early leads to incorrect answers.

2️⃣ Common Sliding Window Traps

These mistakes break correct logic.

Trap 1 — Updating Before Window Is Valid

Window contains violation
But answer is already updated.

Result → Incorrect maximum.

Trap 2 — Shrinking Too Late

Window remains invalid for too long.

Effect:

Frequency map becomes incorrect

Window logic fails

Trap 3 — Forgetting to Decrement Frequency

While shrinking:

The left character must be removed

Frequency must decrease

Otherwise the duplicate still exists logically.

Trap 4 — Incorrect Window Length Calculation

Correct formula:

window length = right - left + 1


Common mistake:

right - left


One element is lost.

Trap 5 — Misunderstanding “At Most k”

“At most k” means:

Condition is allowed while:

value ≤ k


It does not mean exactly k.

3️⃣ Time & Space Reasoning
⏱️ Why Sliding Window Is O(n)

Each element:

Added once by the right pointer

Removed once by the left pointer

Pointer movement:

Right moves at most n times

Left moves at most n times

Total operations ≈ 2n → O(n)

There is no real nested loop.

🧱 Why Brute Force Substrings Are O(n²)

Brute force approach:

Choose start index

Choose end index

Total substrings:

n + (n-1) + (n-2) ...
≈ n²


Too slow for large inputs.

🧠 Why Hash Map Space Is Acceptable

We store:

Character frequency

Typical limits:

26 lowercase letters

52 alphabets

128 ASCII

Space ≈ O(1) in most interview problems.

Core Recall Line

Expand → Break → Shrink → Restore → Update

If you remember this line, you can rebuild the entire logic.

🎯 Goal of Day 5

After this session you should be able to:

Recall the sliding window cycle without notes

Detect traps before they happen

Explain why the time complexity is O(n)

Know exactly when to expand and when to shrink

Stay calm when the window becomes invalid

Understanding first. Speed later.