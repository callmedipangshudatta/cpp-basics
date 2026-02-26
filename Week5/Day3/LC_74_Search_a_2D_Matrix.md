🔍 LC 74 — Search a 2D Matrix
🎯 Pattern

Binary search on a flattened fully sorted matrix.

❓ Why This Problem Matters

Tests:

abstraction ability

index mapping clarity

invariant discipline

ability to treat 2D as 1D

MAANG screen classic.

🔥 Core Insight

Matrix behaves like sorted array if:

rows sorted

first element of row > last of previous row

Example:

1   3   5
7   9  11
13 15 17

Flattened:

[1,3,5,7,9,11,13,15,17]
🧩 Mapping Logic
row = mid / cols
col = mid % cols

This allows binary search without extra space.

🪜 Decision Logic

Compute mid index.

Map to (row, col).

Compare value with target.

Eliminate half.

🔎 Dry Run Example

Search 15

low	high	mid	row	col	value	decision
0	8	4	1	1	9	right
5	8	6	2	0	13	right
7	8	7	2	1	15	✅ found
⚠️ Common Mistakes

Forgetting mapping formula

Using rows instead of cols in division

Breaking invariant with wrong boundaries

🧭 What This Problem Teaches

Binary search is not tied to arrays.

It works on any ordered search space.

You are learning to:

search in abstractions

preserve invariants across mappings

treat dimensions as illusions