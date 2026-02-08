TOKEN-1 — Recall (1 Hour, NO CODE)

This document reinforces the Sliding Window pattern.
Goal is clarity, not speed. Read slowly and visualize the window moving.

1️⃣ Sliding Window Core Template (Logic Only)

Sliding Window always follows a 3-phase cycle.

Phase 1 — Expand

Move the right pointer.

Purpose:

Explore a larger range

Include a new element

Update frequency or count

Think:

“Can I safely grow the window?”

Phase 2 — Check Validity

After adding the new element:

Does the window still satisfy the problem constraint?

Example constraints:

No duplicate characters

At most k replacements

Frequency limit

If valid → continue expanding
If invalid → start shrinking

Phase 3 — Shrink

Move the left pointer.

Purpose:

Remove extra elements

Restore validity

Reduce frequency

Shrinking continues until constraint becomes valid again.

When Do We Update the Answer?

Only when the window is:

Fully valid

Represents a correct candidate

Common update moments:

Longest length

Minimum length

Maximum count

If you update early → wrong answer.

2️⃣ Common Sliding Window Traps (Write & Remember)

These mistakes kill most interview attempts.

Trap 1 — Updating Before Window Is Valid

Window contains violation
But answer already updated

Result → Incorrect maximum.

Trap 2 — Shrinking Too Late

Window stays invalid for too long
Frequency becomes corrupted

Effect → Wrong length calculation.

Trap 3 — Forgetting to Decrement Frequency

While shrinking:

You must remove the left character

Frequency must reduce

Otherwise:

Duplicate still “exists” logically

Trap 4 — Incorrect Window Length Formula

Correct:

length = right - left + 1


Common mistake:

right - left


You lose one element.

Trap 5 — Misunderstanding “At Most k”

“At most k” means:

Window allowed while condition ≤ k

Not:

Exactly k

This confusion breaks many medium problems.

3️⃣ Time & Space Reasoning (Interview Critical)

You must explain this confidently.

Why Sliding Window Is O(n)

Each element:

Added once by right pointer

Removed once by left pointer

Total movements:

Right moves → n times
Left moves → n times


Total ≈ 2n → O(n)

No nested loops in reality.

Why Brute Force Substrings Are O(n²)

Brute force approach:

Choose start index

Choose end index

Number of substrings:

n + (n-1) + (n-2) ...
≈ n²


That’s why brute force times out.

Why Hash Map Space Is Acceptable

We store:

Character frequencies

Typical limits:

26 lowercase letters

52 alphabets

128 ASCII

Space ≈ O(1) in most interview problems.

Even if hashmap:

Space grows with unique characters only.

4️⃣ Window Validity Mental Model

Very important concept.

Valid Window

Satisfies constraint.

Examples:

No duplicates

Replacements ≤ k

Distinct characters ≤ k

Almost-Valid Window

Temporary violation.

Allowed because:

We will shrink immediately.

This is normal behavior.

Golden Rule

Expand → Break → Shrink → Restore → Update

This cycle repeats for entire array.

5️⃣ Recognizing When to Shrink

Shrink when:

Duplicate appears

Frequency exceeds limit

Replacement cost > k

Window size exceeds allowed condition

If you delay shrinking:

Window logic collapses.

6️⃣ Mental Simulation (Mandatory)
Simulation 1 — Duplicate Character Case

Example:

abcabcbb


Observe:

When duplicate enters

Why left must move

Why answer updates only after validity

Focus:

Duplicates force shrinking.

Simulation 2 — “At Most k” Condition

Window allowed while:

condition ≤ k


Once:

condition > k


Shrink immediately.

This is the heart of medium-level sliding window problems.

7️⃣ The One Invariant You Must Never Break

Write this and remember it:

At every step, the window represents a valid or almost-valid range according to the constraint.

Shrinking exists only to restore this invariant.

If invariant breaks → logic fails → wrong answer.

🎯 Goal of Day 5

By the end of this session you should:

Recall the sliding window cycle without notes

Detect traps before they happen

Explain why it is O(n)

Know exactly when to expand, when to shrink

Stay calm when window becomes invalid

Understanding → Control
Control → Speed
Speed → Interview dominance