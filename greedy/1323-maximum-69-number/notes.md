# 1323. Maximum 69 Number

**Idea:**

The number contains only `6` and `9`. To maximize it, we need to change the **leftmost `6` to `9`**, since digits on the left have a greater place value.

1. Count the number of digits (`d`) in `n`.
2. Use powers of 10 to extract each digit from left to right.
3. If the digit is `6`, add `3 × place value` to `n` to change it to `9`.
4. Update the maximum whenever a larger number is obtained.
5. Return the maximum number as soon as you find one. 

For a single-digit number, return `9` directly.

**Time Complexity:** `O(d²)`.  
**Space Complexity:** `O(1)`.