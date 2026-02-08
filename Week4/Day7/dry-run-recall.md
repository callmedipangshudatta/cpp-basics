📌 Day 7 — Dry Run Recall

Goal: Explain pointer movement clearly without code.

This section tests whether you can simulate logic verbally, like in an interview.

🔁 Two Pointers — Dry Run
📘 Example: "racecar"
▶️ Step-by-Step Movement

Initial State

left  → 'r'
right → 'r'


Characters match → move inward

Next Comparisons

'a' vs 'a' → match
'c' vs 'c' → match


Pointers continue moving inward.

🧠 Observation

Characters outside the pointers are already confirmed correct

Only the middle region is being checked

🛑 Stopping Conditions

left >= right → palindrome confirmed

Any mismatch → not a palindrome

🌊 Sliding Window — Dry Run
📘 Example: Longest Substring Without Repeating Characters

String

"abcabcbb"

▶️ Window Expansion

Add 'a' → valid → answer = 1

Add 'b' → valid → answer = 2

Add 'c' → valid → answer = 3

⚠️ Constraint Breaks

Add 'a' → duplicate appears

Window becomes invalid

🔽 Shrinking Action

Move left

Remove characters until duplicate is removed

Restore validity

🎯 Answer Update Rule

Update answer only when the window is valid

🧠 Key Insight

The appearance of a duplicate character is the signal to start shrinking.

🧱 Fixed Window — Mini Recall
📘 Example: Window Size = 3
▶️ Sliding Logic

Add new element

Remove old element

Update count

🧠 Core Rule

Window size never changes.

Only contents change as the window slides.