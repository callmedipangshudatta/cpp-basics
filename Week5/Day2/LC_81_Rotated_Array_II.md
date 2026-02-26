🔍 LC 81 — Search in Rotated Sorted Array II
🎯 Pattern

Binary search with:

rotation

duplicates

ambiguous ordering

❓ Why This Problem Exists

Duplicates break simple logic.

Example:

[2,2,2,3,4,2]

You cannot determine sorted half reliably.

🔥 Core Insight

When duplicates hide order:

nums[low] == nums[mid] == nums[high]

👉 Safely shrink boundaries:

low++

high--

This preserves invariant.

🧠 Decision Logic

If ends equal → shrink

Else detect sorted half

Check if target lies in sorted half

Eliminate other half

⚠️ Why Duplicates Are Dangerous

They can make both halves appear sorted.

Without careful shrinking:

infinite loops

wrong elimination

broken invariant

🔎 Dry Run Example

Search 3 in:

[2,2,2,3,4,2]

Observe boundary shrinking before normal logic resumes.




