# 11. Container With Most Water

**Idea:**

The area of water between two heights depends on:

1. The minimum of the two heights, because the shorter height limits the amount of water.
2. The distance between their indices, because that gives the width.

So:
```cpp
min(height[i], height[j]) * (j - i)
```

I needed the indices of the two heights to calculate the width, which is why j - i is used.

Instead of checking every possible pair using nested loops, use **two pointers:**

1. Start one pointer at the beginning (i = 0).
2. Start the other at the end (j = n - 1).
3. Calculate the area between them.