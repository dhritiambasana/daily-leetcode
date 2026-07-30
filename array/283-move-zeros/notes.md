# 283. Move Zeroes

## Initial Approach

- If `nums[i]` is `0`, search ahead for the next non-zero element and swap.
- The issues was that it repeatedly scans the remaining array.

**Time:** `O(n²)`  
**Space:** `O(1)`

---

## Optimized Approach (Two Pointers)

**Idea:** Keep a write pointer `k` for the next non-zero element.

1. Traverse the array once.
2. Copy every non-zero element to `nums[k]` and increment `k`.
3. Fill the remaining positions with `0`.

**Time:** `O(n)`  
**Space:** `O(1)`

Instead of swapping every `0`, move all non-zero elements forward once, then fill the rest with `0`s.
