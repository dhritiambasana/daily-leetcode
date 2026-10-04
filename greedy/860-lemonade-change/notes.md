# 860. Lemonade Change

**Idea:**

Each lemonade costs $5, so we need to give:

1. $5 bill → no change.
2. $10 bill → give one $5 as change.
3. $20 bill → give $10 + $5 or three $5s.

We only need to track the number of $5 and $10 bills:

So:
```cpp
int b_5 = 0;
int b_10 = 0;
```

For $20, prefer $10 + $5 because $5 bills are more useful for future customers.

If we cannot give the required change, return *false*.
Otherwise, after processing all bills, return *true*.

Time Complexity: **O(n)**
Space Complexity: **O(1)**