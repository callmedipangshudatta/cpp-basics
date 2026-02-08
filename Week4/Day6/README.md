📌 DAY 6 — Sliding Window (Pattern Lock)

ONE-PAGE FINAL MEMORY SHEET
Goal: Recall the entire Sliding Window pattern without code.

Rule:
If this grows long → rewrite shorter.

🧠 Core Recall Line

Expand → Break → Shrink → Restore → Update

If this sentence is automatic, the pattern is locked.

1️⃣ Pattern Trigger Recognition
🔑 Trigger Keywords

substring

contiguous

longest / shortest

frequency / count

at most / at least

without repeating

If a problem talks about a continuous range in a string or array,
Sliding Window should be your first thought.

❓ Why Sliding Window?

Brute force checks all substrings → O(n²)

Sliding Window maintains one moving range → O(n)

2️⃣ Fixed Window vs Variable Window
🧱 Fixed Window

Characteristics

Window size = k

Left and right move together

Size never changes

Used when

Problem explicitly gives window size

Example: “substring of size k”

🌊 Variable Window

Characteristics

Window size changes

Expand until constraint breaks

Shrink to restore validity

Used when

Longest / smallest valid substring

“At most k”

“Without repeating”

🧭 Identification Rule
“size k”                    → Fixed Window
“longest / smallest valid”  → Variable Window

3️⃣ Expand → Shrink Logic
🔄 Expand (Right Pointer)

Move right

Include new element

Update frequency / count

Check constraint

⚠️ When Constraint Breaks

Window may become temporarily invalid

This is expected

Do not panic

Do not update answer

🔽 Shrink (Left Pointer)

Move left

Remove element

Decrement frequency

Repeat until window becomes valid

🎯 Update the Answer

Update only when:

Window is valid

Constraint is satisfied

🔁 Universal Cycle

Expand → Break → Shrink → Restore → Update

Every sliding window problem follows this.

4️⃣ Core Invariant (Must Never Break)

“At every step, the window represents a valid or almost-valid substring according to the constraint.”

Almost-valid means

Temporary violation is allowed

Shrinking restores validity

❌ The invariant must never stay broken.

5️⃣ Time & Space Complexity
⏱️ Time — O(n)

Right pointer moves ≤ n

Left pointer moves ≤ n

Total operations ≈ 2n

No real nested loop.

🧠 Space — O(1) / O(k)

We store frequency:

26 lowercase letters

128 ASCII characters

Acceptable in interviews.

6️⃣ Classic Lock-In Problems

Longest Substring Without Repeating Characters

Longest Repeating Character Replacement (424)

These teach:

Duplicate handling

“At most k”

Variable window mastery

🎯 End Goal of Day 6

After this page, you should be able to:

Recognize Sliding Window within seconds

Choose fixed vs variable correctly

Recall expand–shrink cycle from memory

Explain O(n) confidently

Approach medium problems calmly

✅ Final Check

Expand → Break → Shrink → Restore → Update
