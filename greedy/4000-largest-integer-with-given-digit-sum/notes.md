# Largest Integer With Digit Sum `s`

We need to construct the largest `n`-digit integer whose digits add up to `s`.

1. If `n == 0` or `s == 0`, return `0`.
2. If `s <= 9`, place `s` in the leftmost position using \(10^{n-1}\).
3. Otherwise, greedily place `9` in each position and subtract `9` from `s`.
4. When `s <= 9`, place the remaining sum in the next position.
5. If the sum is not exhausted after filling all `n` digits, return `-1`.

**Time Complexity:** `O(n)`  
**Space Complexity:** `O(1)`