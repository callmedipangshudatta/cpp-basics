🔍 LC 33 — Search in Rotated Sorted Array
🧠 Pattern

Binary Search on modified sorted array.

Array is sorted but rotated → one half is always sorted.

❓ Why Normal Binary Search Fails

Binary search assumes full ordering.

Rotated array breaks global order:

[4,5,6,7,0,1,2]

But one half remains sorted — that’s the key.

🔥 Core Insight

At any step:
👉 Either left half OR right half is sorted.

We detect the sorted half and decide where target can exist.

🧩 Decision Logic (Mental Model)

Find mid.

Check which half is sorted.

Decide if target lies in sorted half.

Eliminate the other half.

🪜 Step-by-Step Logic
Case 1️⃣ Left half sorted

Condition:

nums[low] ≤ nums[mid]

Then left side is sorted.

If target in range → search left

Else → search right

Case 2️⃣ Right half sorted

Else → right half sorted.

If target in range → search right

Else → search left

🔎 Dry Run Example

Search 0 in:

[4,5,6,7,0,1,2]
low	high	mid	value	sorted side	decision
0	6	3	7	left sorted	go right
4	6	5	1	right sorted	go left
4	4	4	0	—	✅ found

Invariant preserved at every step.

⚠️ Common Mistakes

Forgetting to check which half is sorted.

Breaking invariant by discarding wrong half.

Using low = mid instead of mid + 1.

🧭 What This Problem Teaches

This is not a new algorithm.

It is binary search with stronger observation.

You are learning:

Pattern recognition

Invariant protection

Decision-based elimination

🧠 Pattern Tag

Binary Search → Rotated Array → Half Sorted Detection