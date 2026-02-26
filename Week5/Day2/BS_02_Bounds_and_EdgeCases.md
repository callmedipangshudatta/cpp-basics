🧠 Binary Search — Bounds, Duplicates & Edge Cases
🎯 Focus

Understanding boundary-based binary search and avoiding off-by-one errors.

1️⃣ Lower Bound / Upper Bound Thinking
🔹 First Occurrence

First index where value appears.

🔹 Last Occurrence

Last index where value appears.

❗ Why equality is tricky

Binary search may land on any duplicate — not necessarily boundary.

Example:

[1,2,3,3,3,4]

We must search for boundary, not value.

2️⃣ Lower & Upper Bound Concepts
Lower Bound

First index where arr[i] >= target

Upper Bound

First index where arr[i] > target

These power:

first/last occurrence

insertion position

frequency counting

3️⃣ Off-by-One Errors (Critical)
⚠️ Why low = mid is dangerous

Range may not shrink → infinite loop.

✅ Correct Updates

low = mid + 1

high = mid - 1

Binary search must always shrink the range.

4️⃣ Invariant for Bounds Problems

"The answer is the first/last index satisfying a condition."

We are searching for a transition point, not a value.

Example condition pattern:

false false false true true true

Binary search finds first true.

5️⃣ Mandatory Dry Runs
Find FIRST 3

[1,2,3,3,3,4] → index 2

Find LAST 3

→ index 4

Element not present

Loop stops when low > high.

🧭 What This Teaches

You are shifting from:

value search → boundary detection

equality → condition thinking

This unlocks half of advanced binary search problems.