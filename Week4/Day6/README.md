# STRING — SLIDING WINDOW (FINAL)

## 1. Trigger Words (Pattern Recognition)

If the problem mentions:

- substring
- contiguous
- longest / shortest
- frequency / count
- at most / at least
- without repeating

Think Sliding Window first.

Reason:
Substring = continuous range → avoid O(n²) brute force.

---

## 2. Fixed vs Variable (Decision Rule)

Fixed Window:
- Window size = k
- Left and right move together
- Used when problem says:
  - "size k"
  - "substring of length k"

Variable Window:
- Window size changes
- Expand until condition breaks
- Shrink to restore validity
- Used when problem says:
  - "longest"
  - "smallest"
  - "at most k"
  - "without repeating"

---

## 3. Expand → Shrink Logic

Expand:
- Move right pointer
- Include new character
- Update frequency / count

Check:
- If constraint satisfied → continue expanding
- If violated → shrink

Shrink:
- Move left pointer
- Remove character
- Decrement frequency
- Restore validity

Update answer only when window is valid.

Cycle:
Expand → Break → Shrink → Restore → Update

---

## 4. Core Invariant

At every step, the window represents a valid or almost-valid substring according to the constraint.

If invalid:
Shrink until valid again.

Invariant must never stay broken.

---

## 5. Time & Space Complexity

Time:
Each element added once and removed once  
Left moves ≤ n, Right moves ≤ n  
Total → O(n)

Space:
Frequency map or array  
Usually 26 / 128 characters  
Space → O(1) or O(k)

---

## 6. Classic Problems

1. Longest Substring Without Repeating Characters
2. Longest Repeating Character Replacement (424)
