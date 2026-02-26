🔍 LC 410 — Split Array Largest Sum
🎯 Pattern

Binary search on minimum possible largest subarray sum.

❓ Why This Problem Matters

This is a classic Google / Amazon interview problem.

Tests:

feasibility design

tight bounds

greedy + binary search

invariant discipline

Separates strong candidates from average ones.

🔥 Problem Insight

We split array into k subarrays.

Goal:
👉 Minimize the largest subarray sum.

We search the smallest maximum sum that works.

🧩 Search Space
Lower Bound
max(nums)

Largest element must fit.

Upper Bound
sum(nums)

All elements in one subarray.

Answer lies within this range.

🧠 Monotonic Predicate

If a max sum works → any larger sum also works.

False False False True True True

We find first True.

🪜 Feasibility Logic

isPossible(maxSum):

Try forming subarrays without exceeding maxSum.

Count required subarrays.

If count ≤ k → feasible.

🔎 Dry Run Snapshot

Example:

nums = [7,2,5,10,8], k = 2

Answer → 18

Because:

[7,2,5] → 14

[10,8] → 18

Minimum possible largest sum.

⚠️ Common Mistakes

Wrong bounds

Incorrect subarray counting

Breaking invariant

Using greedy incorrectly

🧭 What This Problem Teaches

Binary search is not about numbers.

It is about:

partitioning

optimization

feasibility boundaries

We are searching the smallest acceptable limit.