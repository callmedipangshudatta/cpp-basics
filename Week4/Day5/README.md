DAY 5 — Sliding Window (RECALL + TRAPS)
TOKEN-1 — Recall (1 Hour, NO CODE)

This document is for reinforcing memory, not learning new things.
You should be able to recall the full sliding window flow without seeing code.

Read slowly. Visualize the window moving.

1️⃣ Sliding Window Template (Logic Only)

Every Sliding Window problem follows the same 3-step cycle.

🔄 Expand Condition

Move the right pointer.

Purpose:

Include a new element

Increase window size

Update frequency / count

Think:

“Can I safely grow the window?”

Actions:

Add s[right]

Increment frequency

Check if constraint is still valid

⚠️ When Window Becomes Invalid

The new element may cause:

Duplicate character

Frequency exceeding limit

Replacement count exceeding k

This is normal.

The window is allowed to become temporarily invalid.

🔽 Shrink Condition

Move the left pointer.

Purpose:

Remove extra characters

Restore validity

Actions:

Remove s[left]

Decrement frequency

Continue shrinking until constraint becomes valid again

🎯 When to Update Answer

Only update answer when:

Window is valid

Constraint satisfied

Common updates:

Maximum length

Minimum length

Maximum count

If updated too early → wrong answer.

2️⃣ Common Sliding Window Traps (Write & Remember)

These are the mistakes that break correct logic.

Trap 1 — Updating Before Window Is Valid

Window contains violation
But answer already updated.

Result:

Incorrect maximum length.

Trap 2 — Shrinking Too Late

Window stays invalid for too long.

Effects:

Frequency map becomes incorrect

Window logic collapses

Trap 3 — Forgetting to Decrement Frequency

While shrinking:

You must remove the left character

Frequency must reduce

If not:

Duplicate still “exists” logically.

Trap 4 — Incorrect Window Length Calculation

Correct formula:

window length = right - left + 1


Common mistake:

right - left


You lose one element.

Trap 5 — Misunderstanding “At Most k”

“At most k” means:

Window allowed while:

condition ≤ k


Not:

Exactly k.

This mistake breaks many medium problems.

3️⃣ Time & Space Reasoning (Interview Critical)

You must explain this confidently without thinking.

⏱️ Why Sliding Window is O(n)

Each element:

Added once by right pointer

Removed once by left pointer

Movements:

Right moves → n times

Left moves → at most n times

Total ≈ 2n
Still O(n)

There is no true nested loop.

🧱 Why Brute Force Substrings Are O(n²)

Brute force:

Pick start index

Pick end index

Number of substrings:

n + (n-1) + (n-2) ...
≈ n²


Too slow for large inputs.

🧠 Why Hash Map Space Is Acceptable

We store:

Character frequency

Usually limited:

26 lowercase

52 alphabets

128 ASCII

Space ≈ O(1) in most cases.

Even hashmap only stores unique characters.

Core Recall Line (Memorize This)

Expand → Break → Shrink → Restore → Update

If you remember only this line,
you can still rebuild the entire Sliding Window logic.

🎯 Goal of Day 5

By the end of this session you should:

Recall the sliding window cycle without notes

Detect traps before they happen

Explain why it is O(n)

Know exactly when to expand and shrink
