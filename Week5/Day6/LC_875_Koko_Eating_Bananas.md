🔍 LC 875 — Koko Eating Bananas
🎯 Pattern

Binary search on minimum eating speed.

❓ Why This Problem Matters

Simple to understand

Deep feasibility reasoning

Extremely common interview question

Perfect closure for search-space binary search

🔥 Core Insight

We search the minimum speed at which Koko can finish within h hours.

🧩 Search Space
Lower Bound
1

Minimum possible speed.

Upper Bound
max(piles)

Eating faster than largest pile is unnecessary.

🧠 Monotonic Predicate

If speed works → any faster speed also works.

False False False True True True

Find first True.

🪜 Feasibility Logic

isPossible(speed):

For each pile:

hours += ceil(pile / speed)

If total hours ≤ h → feasible

🔎 Dry Run Snapshot

Piles:

[3,6,7,11], h = 8

Minimum speed → 4

⚠️ Common Mistakes

wrong upper bound

integer division mistakes

not using ceiling

breaking invariant

🧭 What This Problem Teaches

We are searching for the minimum viable rate.

Binary search becomes a tool for:

optimization

performance limits

feasibility thresholds