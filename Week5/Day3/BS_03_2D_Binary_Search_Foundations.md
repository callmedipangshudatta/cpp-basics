🧠 Binary Search in 2D Arrays — Foundations
🎯 Goal

Understand when and how binary search applies to matrices.

1️⃣ When Binary Search Works in 2D

Binary search works only if global ordering exists.

✅ Case 1: Fully Sorted Matrix

Example:

1   3   5
7   9  11
13 15 17

Properties:

Each row sorted

First element of each row > last element of previous row

👉 Matrix behaves like a flattened sorted array.

✅ Case 2: Row-wise Sorted Only

Example:

1  4  7
2  5  8
3  6  9

Rows sorted, but columns hold ordering.

👉 Requires different approach (binary search per row).

❌ When Binary Search is NOT Applicable

Random matrices

No monotonic ordering

Mixed sorting directions

Binary search requires monotonic structure.

2️⃣ Index Mapping Logic (2D → 1D)

If matrix is fully sorted, we treat it as 1D.

🧩 Mapping Formula
row = mid / cols
col = mid % cols

Where:

cols = number of columns

🧠 Why Mapping Works

Flattened view:

[1,3,5,7,9,11,13,15,17]

Index mapping preserves order → invariant stays valid.

3️⃣ Invariant in 2D Binary Search
✍️ Write this:

"If the target exists, it lies within the mapped index range."

We search indices, not rows.

Binary search operates on:

0 → rows*cols - 1
4️⃣ Mandatory Dry Run

Matrix:

1   3   5
7   9  11
13 15 17

Search target = 9

low	high	mid	row	col	value	decision
0	8	4	1	1	9	✅ found

Search target = 8

low	high	mid	row	col	value	decision
0	8	4	1	1	9	left
0	3	1	0	1	3	right
2	3	2	0	2	5	right
3	3	3	1	0	7	right
4	3	—	—	—	—	❌ stop

Invariant preserved.