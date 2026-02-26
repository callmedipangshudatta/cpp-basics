🧠 Day 7 — Pure Revision & Active Recall
🎯 Goal

Convert binary search knowledge into instant recall and clarity.

No coding. No notes. Speak it out loud.

1️⃣ Pattern A vs Pattern B
🔹 Pattern A — Index-Based Binary Search

Used when searching in:

sorted arrays

rotated arrays

matrices (flattened)

first/last occurrence

👉 Search space = indices

Invariant:

If answer exists, it lies within current index range.

🔹 Pattern B — Answer-Space Binary Search

Used when finding:

minimum capacity

maximum feasible distance

speed, time, rate

partition limits

👉 Search space = possible answers

Invariant:

The answer lies within current search space.

2️⃣ Index-Based vs Answer-Based BS
Aspect	Index-Based	Answer-Based
Search space	array indices	possible answers
Goal	find value	find threshold
Condition	equality	feasibility
Requires monotonicity	implicit	mandatory
3️⃣ Invariants for Both
Index-Based

Answer lies within [low, high] index range.

Answer-Based

Answer lies within [low, high] feasible range.

Break invariant → break correctness.

4️⃣ Typical Traps
⚠️ Common Failures

infinite loops (low = mid)

wrong bounds

non-monotonic feasibility

off-by-one errors

returning wrong boundary

ignoring duplicates

breaking invariant