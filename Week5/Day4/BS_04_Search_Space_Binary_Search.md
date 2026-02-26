🧠 Search Space Binary Search — Foundations
🎯 Goal

Understand binary search on the answer space, not indices.

1️⃣ Pattern Trigger Recognition

Problems that scream answer-space binary search:

"Minimum possible capacity"

"Maximum feasible speed"

"At least / at most"

"Within D days"

"Allocate resources"

"Smallest value that works"

👉 You are not searching an array.
👉 You are searching the range of possible answers.

2️⃣ Monotonic Predicate (Key Concept)

Binary search requires a monotonic condition.

🧩 Monotonic Pattern
False False False True True True

OR

True True True False False

Once condition flips, it never flips back.

❓ Why Monotonicity is Mandatory

Binary search eliminates half assuming ordering.

Without monotonic behavior:

elimination becomes unsafe

invariant breaks

wrong answer possible

❌ When Binary Search Fails

If feasibility behaves like:

True False True False

Binary search cannot be applied.

3️⃣ Search Space Definition

You must clearly define:

🔹 What is low?

Smallest possible answer.

🔹 What is high?

Largest possible answer.

🔹 Why bounds are valid?

They must contain the answer.

📦 Example: Shipping Capacity

low = max(weight) → minimum feasible

high = sum(weights) → maximum feasible

Answer must lie within this range.

4️⃣ Invariant (Write This)

"The answer always lies within the current [low, high] search space."

Binary search narrows feasible answers.

Never discard a possible solution.

5️⃣ Mandatory Dry Run (Feasibility Example)
🚢 Example: Ship packages in D days

Weights:

[1,2,3,4,5,6,7,8,9,10], D = 5

Search capacity.

low	high	mid	feasible?	decision
10	55	32	yes	shrink right
10	31	20	yes	shrink right
10	19	14	no	increase left
15	19	17	yes	shrink right
15	16	15	yes	shrink right
15	14	—	—	stop → 15

Invariant preserved.