🔍 LC 1011 — Capacity To Ship Packages Within D Days
🎯 Pattern

Binary search on minimum feasible capacity.

❓ Why This Problem Matters

This is the cleanest introduction to answer-space binary search.

Tests:

monotonic predicate

bounds definition

feasibility simulation

invariant discipline

MAANG favorite.

🔥 Core Insight

We search the minimum capacity that allows shipping within D days.

🧩 Search Space
Lower Bound
max(weights)

Must carry the heaviest package.

Upper Bound
sum(weights)

Ship all in one day.

🧠 Monotonic Predicate

If capacity works → any larger capacity also works.

False False False True True True

We find first True.

🪜 Decision Logic

Guess capacity (mid).

Simulate shipping.

If feasible → try smaller.

If not → increase capacity.

🔎 Dry Run Snapshot

Weights:

[1,2,3,4,5,6,7,8,9,10], D=5

Minimum capacity → 15

⚠️ Common Mistakes

Wrong bounds

Breaking invariant

Confusing feasibility with optimization

Forgetting monotonic behavior