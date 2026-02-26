🧠 Advanced Search Space Reasoning
🎯 Goal

Lock in search-space binary search so you never mis-handle boundaries again.

1️⃣ Minimize vs Maximize Problems

Binary search behaves differently based on the goal.

🎯 Minimize the Maximum (Find smallest valid answer)

Pattern:

False False False True True True

👉 Find first True.

Boundary Movement

feasible → move left (high = mid - 1)

not feasible → move right (low = mid + 1)

Used in:

shipping capacity

split array

minimum speed

🎯 Maximize the Minimum (Find largest valid answer)

Pattern:

True True True False False False

👉 Find last True.

Boundary Movement

feasible → move right

not feasible → move left

Used in:

aggressive cows

maximize minimum distance

placement problems

🧠 How Invariant Changes

Minimize case:

answer in left half including mid

Maximize case:

answer in right half including mid

2️⃣ Common Interview Traps
❌ Wrong Feasibility Condition

If condition isn't monotonic → BS fails.

❌ Incorrect Mid Update

Bad:

low = mid
high = mid

Causes infinite loops.

❌ Off-by-One in Answer

Returning low vs high incorrectly.

Rule of thumb:

minimize → return low

maximize → return high

3️⃣ ONE-PAGE FINAL NOTE (MANDATORY)
🧾 BINARY SEARCH — SEARCH SPACE (FINAL)
🔑 Trigger Words

minimum possible

maximum feasible

capacity / speed

within D days

allocate / distribute

smallest value that works

📈 Monotonicity Definition

A condition is monotonic if once it becomes true (or false),
it never flips back.

False False False True True True

Binary search finds transition point.

🧱 Invariant

The answer always lies within the current search space.

Never discard a feasible solution.

📏 Boundary Rules
Lower Bound

Smallest possible valid answer.

Upper Bound

Largest possible valid answer.

Bounds must:

include answer

be finite

be realistic

⚠️ Common Mistakes

wrong bounds

non-monotonic condition

infinite loops

incorrect return value

side effects in feasibility

off-by-one errors

🧭 Mental Model

Binary search is not searching numbers.
It is searching the first point where reality changes.