🧠 Designing isPossible() Correctly
🎯 Goal

Learn to build a correct feasibility function — the heart of answer-space binary search.

1️⃣ Feasibility Function Design
🔍 What isPossible(x) Must Guarantee

For a guessed answer x, the function must:

Return true if solution is feasible.

Return false otherwise.

Be deterministic (same input → same output).

Have no side effects.

❗ Why Determinism is Mandatory

Binary search assumes monotonic behavior.

If isPossible(x) sometimes returns different results for same x:

invariant breaks

search becomes unreliable

wrong answers occur

❌ Why Side Effects Break Binary Search

Bad example:

modifying global variables
changing input array

Binary search calls isPossible() multiple times.

If state changes → results become inconsistent.

👉 Treat isPossible() as a pure function.

2️⃣ Tight vs Loose Bounds

Bounds define your search universe.

⚠️ Why low Can’t Be 0

If 0 is impossible:

wasted iterations

incorrect feasibility assumptions

Example:
Capacity problem → minimum is max(array).

⚠️ Why high Can’t Be Infinite

Infinite bounds:

prevent convergence

cause overflow

waste iterations

Always define realistic upper limits.

🧠 Tight Bounds = Faster Convergence
Bounds	Effect
Tight	fast & safe
Loose	slow
Wrong	incorrect result
3️⃣ Mandatory Dry Run Process

When debugging binary search:

Track:

mid value

feasibility result

boundary update

invariant preservation

Example Dry Run Template
low	high	mid	feasible?	decision

This reveals logic errors instantly.

🧭 What This Teaches

Binary search success depends more on:

✔ feasibility logic
✔ correct bounds
✔ invariant discipline