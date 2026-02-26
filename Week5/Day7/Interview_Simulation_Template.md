🎤 Binary Search Interview Simulation Template
🎯 Goal

Simulate a real interview and explain your reasoning clearly.

Pick one problem from Week 5.

🧩 Step 1 — Problem Classification

Explain:

Is it index-based or answer-space?

What are the trigger words?

Why binary search applies?

🧩 Step 2 — Define Search Space

Explain clearly:

If Index-Based

low = 0

high = n - 1

If Answer-Space

low = smallest possible answer

high = largest possible answer

Justify both.

🧩 Step 3 — State the Invariant

Say aloud:

“The answer always lies within the current search space.”

Explain why.

🧩 Step 4 — Boundary Logic

Explain:

When do you move left?

When do you move right?

Why does the range shrink?

How do you avoid infinite loops?

🧩 Step 5 — Complexity

State clearly:

Time: O(log n) or O(n log range)

Space: O(1)

Explain what n and range represent.

🧩 Step 6 — Dry Run Edge Cases

Verbally dry-run:

smallest input

largest input

duplicates

target not present

single element