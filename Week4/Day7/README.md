📌 DAY 7 — Detailed Revision Day (MOST IMPORTANT)

No new learning.
No browsing.
No copying.

This day proves the patterns are understood from memory.

Core Goal:
If you can explain clearly without notes, you truly understand.

⏱️ TOKEN-1 — Active Recall (1 Hour)

Speak out loud

Do not read silently

Treat this like a mock interview

Interviews test verbal clarity, not quiet thinking.

🧠 1️⃣ Pattern Recall (From Memory)

Explain both patterns without looking at notes.

🔁 Two Pointers (Strings)
🔑 Trigger Recognition

Use Two Pointers when the problem mentions:

Palindrome

Reverse string

Compare from both ends

Symmetry

Pair checking

If characters must be checked from left and right together,
Two Pointers is the first pattern to consider.

🧠 Core Invariant

At every step:

Characters before left are already verified

Characters after right are already verified

Only the middle region is unchecked

If a mismatch appears → the condition fails immediately.

🔄 Pointer Movement

Initialization

left  = 0
right = n - 1


If characters match

left++
right--


If mismatch

return false


Pointers never move backward.

⏱️ Time & Space

Time → O(n)

Space → O(1)

Each character is checked once.
No extra memory is used.

🌊 Sliding Window (Strings)
🔑 Trigger Recognition

Look for keywords:

substring

contiguous

longest / shortest

frequency / count

at most k

without repeating

A continuous range inside a string usually means Sliding Window.

🧠 Core Invariant

The window always represents a valid or almost-valid substring.

If invalid:

Shrink until validity is restored

❌ The window must never remain invalid.

🔄 Pointer Movement Logic

Right pointer → expands the window

Left pointer → shrinks the window

Recall Flow

Add new character

Update frequency

Check constraint

If broken → shrink

Restore validity

Update answer

🔁 Universal Cycle

Expand → Break → Shrink → Restore → Update

Every Sliding Window problem follows this cycle.

⏱️ Time & Space

Time → O(n)

Right moves ≤ n times

Left moves ≤ n times

Space → O(1) or O(k)

Frequency storage is limited

🧪 2️⃣ Dry-Run Recall (No Code)

Explain pointer movement verbally:

One palindrome example

One sliding window example

Focus on:

Why pointers move

When shrinking starts

When the answer updates

🎯 End Goal of Day 7

After this session, you should be able to:

Explain both patterns without notes

State invariants confidently

Describe pointer movement clearly

Justify O(n) without hesitation

Speak logic calmly like in an interview

✅ Final Check

We’re interview-ready.