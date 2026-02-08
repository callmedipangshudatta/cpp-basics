DAY 7 — DETAILED REVISION DAY (MOST IMPORTANT)

Rules of Today

No new learning

No browsing

No copying

Only memory, thinking, and explanation

Goal:

If you can explain without notes, the pattern is truly yours.

TOKEN-1 — Active Recall (1 Hour)

Speak out loud.
Silent thinking is not enough — interviews are verbal.

Part 1️⃣ — Pattern Recall

Explain both patterns from memory.

A. Two Pointers (Strings)
🔑 Trigger

Use Two Pointers when problem mentions:

Palindrome

Reverse string

Compare from both ends

Pair checking

Symmetry

Core signal:

Need to process string from left and right together.

🛡️ Invariant

Invariant means the rule that always stays true.

For palindrome:

Characters before left are already correct

Characters after right are already correct

Only the middle part is unknown.

If mismatch appears → stop immediately.

🔄 Pointer Movement

Initial:

left = 0  
right = n - 1


If characters match:

left++
right--


If mismatch:

Return false

Pointers never move backward.

⏱️ Time & Space

Time:

Each character checked once → O(n)

Space:

No extra storage → O(1)

B. Sliding Window (Strings)
🔑 Trigger

Look for:

Substring

Contiguous

Longest / shortest

Frequency / count

At most k

Without repeating

Signal:

Continuous range inside string → Sliding Window.

🛡️ Invariant

Window always represents a valid or almost-valid substring.

Almost-valid:

Constraint may break temporarily

Shrinking restores validity

Window must never stay invalid.

🔄 Pointer Movement

right expands window

left shrinks window

Flow:

Add new character

Update frequency

Check constraint

If broken → shrink

Restore validity

Update answer

Cycle:

Expand → Break → Shrink → Restore → Update

⏱️ Time & Space

Time:

Right moves n times
Left moves at most n times
→ O(n)

Space:

Frequency array / map
→ O(1) or O(k)

Part 2️⃣ — Dry-Run Recall (From Memory)

No code. Only logic.

A. Palindrome Example

Example:

racecar


Explain aloud:

Compare first and last

Move inward

Continue until pointers meet

Focus on:

Why mismatch ends early

Why no extra memory needed

B. Sliding Window Example

Example:

Longest Substring Without Repeating Characters

Explain:

Add characters one by one

Duplicate appears → window invalid

Move left until duplicate removed

Update answer only when valid

Key realization:

Duplicate is the signal to shrink.

🎯 Goal of Day 7

After this session you should:

Explain both patterns without notes

State invariant confidently

Describe pointer movement clearly

Justify O(n) without hesitation

Speak logic calmly like in interview