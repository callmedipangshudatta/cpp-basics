📅 Week 5 → Day 1
🧠 TOKEN-1 — Binary Search Foundations (NO CODE)
1️⃣ Pattern Trigger Recognition
🔍 Problems that scream Index-Based Binary Search

Use binary search when you see:

Find element in sorted array

Search in rotated sorted array

First / Last occurrence of element

Lower bound / Upper bound

Matrix is sorted

Minimum in rotated array

Any question asking for O(log n)

❌ Why Brute Force Fails

Linear scan ignores ordering.

Time complexity becomes O(n) instead of O(log n).

Wastes the structure already provided.

👉 Binary search exists to exploit order.

2️⃣ Core Binary Search Template (Mental Model)

Understand the logic — not code.

🧩 Core Variables

low → start of search space

high → end of search space

mid → middle point

❓ Why mid = low + (high - low) / 2

Prevents integer overflow.

Keeps mid inside range.

🎯 What Binary Search Really Does

Binary search is divide & eliminate:

Check middle.

Eliminate half that cannot contain answer.

Repeat.

👉 Every step shrinks the search space.

3️⃣ 🔥 MOST IMPORTANT INVARIANT
✍️ Write this and remember it:

"If the answer exists, it always lies within the current [low, high] range."

🧠 Why This Must Never Break

If you update boundaries incorrectly:

You may discard the answer.

You may cause infinite loops.

You break correctness.

❌ Example of Breaking the Invariant

If target is left of mid but you move low = mid + 1 → answer lost.

Binary search is not guessing.
It is controlled elimination.

4️⃣ Boundary Movement Logic (Deep Understanding)
🔹 When do we move low = mid + 1?

When:

Mid is too small

Target must be on the right side

👉 We eliminate left half including mid.

🔹 When do we move high = mid - 1?

When:

Mid is too large

Target must be on the left side

👉 We eliminate right half including mid.

🔹 Why low ≤ high vs low < high matters
Condition	Meaning	Risk
low ≤ high	Inclusive search	Safe for exact match
low < high	Exclusive end	Risk of missing answer

👉 Beginners should use low ≤ high.

⚠️ How Infinite Loops Are Created

Common mistakes:

Using low = mid

Using high = mid

Not shrinking range

If range doesn’t shrink → loop never ends.

5️⃣ Mandatory Dry Runs (By Hand)
🔎 Dry Run 1: Search 7 in [1,3,5,7,9,11]
low	high	mid	value	decision
0	5	2	5	go right
3	5	4	9	go left
3	3	3	7	✅ found

Invariant held at every step.

🔎 Dry Run 2: Search 3 in [1,2,3,3,3,4,5]

(Binary search finds an occurrence)

low	high	mid	value	decision
0	6	3	3	✅ found

To find first/last → boundary logic changes.

🔎 Dry Run 3: Element Not Present (Search 8)
low	high	mid	value	decision
0	5	2	5	right
3	5	4	9	left
3	3	3	7	right
4	3	—	—	❌ stop

Loop ends when low > high.