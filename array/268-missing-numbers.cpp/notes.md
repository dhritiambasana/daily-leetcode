# 268. Missing Number

## Approach

**Idea:**  
The array contains numbers from `0` to `n` with one number missing.

1. Calculate the expected sum of numbers from `0` to `n`.
2. Calculate the actual sum of the array.
3. The difference is the missing number.

```cpp
ideal_sum - vector_sum
```

**Time:** `O(n)`  
**Space:** `O(1)`
