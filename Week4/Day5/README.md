📌 DAY 5 — Sliding Window (Recall + Traps)

Goal: Rebuild the entire sliding window logic from memory — no code.

🧠 Core Mental Model

Expand → Break → Shrink → Restore → Update

If you remember this line, the whole pattern comes back.

1️⃣ Sliding Window Template (Logic Only)
🔄 Expand (Right Pointer)

Purpose

Include a new element

Increase window size

Update state (frequency / count)

Actions

Add s[right] to window

Increment frequency

Check constraint

⚠️ Temporary Invalid State (This Is Normal)

The window may become invalid due to:

Duplicate character

Frequency exceeding limit

Replacements > k

❗ Invalid windows are expected.
Do not update the answer here.

🔽 Shrink (Left Pointer)

Purpose

Remove extra elements

Restore validity

Actions

Remove s[left]

Decrement frequency

Move left

Repeat until window is valid

🎯 Update the Answer

Update only when:

Window is valid

Constraint is satisfied

Common updates

Maximum length

Minimum length

Maximum count

⚠️ Updating early → wrong answer.

2️⃣ Common Sliding Window Traps
🚫 Trap 1 — Updating Before Validity

Updating while the window is invalid
→ Incorrect maximum / minimum

🚫 Trap 2 — Shrinking Too Late

Leaving the window invalid too long
→ Broken logic, incorrect counts

🚫 Trap 3 — Forgetting to Decrement Frequency

Removing s[left] without updating frequency
→ Duplicate still exists logically

🚫 Trap 4 — Wrong Window Length Formula

Correct

window_length = right - left + 1


Wrong

right - left

🚫 Trap 5 — Misunderstanding “At Most k”

“At most k” means:

value ≤ k


Not:

value == k

3️⃣ Time & Space Reasoning
⏱️ Why Sliding Window Is O(n)

Each element:

Added once (right pointer)

Removed once (left pointer)

Pointers move at most n times each
→ Total operations ≈ 2n
→ O(n)

No real nested loop.

🧱 Why Brute Force Substrings Are O(n²)

Brute force:

Choose start index

Choose end index

Total substrings:

n + (n-1) + (n-2) + ...
≈ n²


Too slow.

🧠 Space Complexity (Hash Map)

We store:

Character frequencies

Typical limits:

26 lowercase

52 alphabets

128 ASCII

→ O(1) space in interviews

🎯 End Goal of Day 5

After this session, you should be able to:

Recall the full sliding window cycle

Detect traps before they occur

Explain why time complexity is O(n)

Know exactly when to expand and shrink

Stay calm when the window becomes invalid

✅ Final Recall Check

Expand → Break → Shrink → Restore → Update

If this sentence makes sense without code —
you’re ready for Day 6.