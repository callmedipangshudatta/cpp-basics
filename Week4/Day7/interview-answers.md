📌 Day 7 — Interview Simulation Answers

Purpose: Practice how to say the logic clearly in an interview.

These are spoken answers, not written explanations.

❓ Why Not Brute Force?
🚫 Brute Force Does

Checks all substrings

Checks all pairs

Time

O(n²)


Too slow for large inputs.

✅ Efficient Patterns

Two Pointers → O(n)

Sliding Window → O(n)

🧠 Key Reason (Say This)

“We reuse previous computation instead of recalculating from scratch.”

This is the core optimization.

❓ What Breaks If Pointers Move Incorrectly?
🔁 Two Pointers

May skip a mismatch

Can falsely detect a palindrome

🌊 Sliding Window

Window may remain invalid

Frequency map becomes incorrect

Final answer becomes wrong

⚠️ Core Insight

Pointer discipline ensures correctness.

❓ What Invariant Maintains Correctness?
🔁 Two Pointers

The outer region is already verified and correct.

Only the middle remains unchecked.

🌊 Sliding Window

The window is always valid or being restored.

It must never remain invalid.

🧠 Why Invariants Matter

The invariant is the safety rule that prevents logical errors.

❓ Worst-Case Complexity
🔁 Two Pointers

Time → O(n)

Space → O(1)

🌊 Sliding Window

Time → O(n)

Space → O(1) or O(k)

📌 Reason

Pointers only move forward.
No element is processed more than twice.

❓ How Would I Explain This to an Interviewer?
🔁 Two Pointers (Verbal Answer)

“I compare characters from both ends and move inward while maintaining that the checked region is already correct.”

🌊 Sliding Window (Verbal Answer)

“I maintain a dynamic window that expands to explore and shrinks when constraints break, ensuring the window always represents a valid substring.”