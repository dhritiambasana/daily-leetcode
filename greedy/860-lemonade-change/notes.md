# 605. Can Place Flowers

**Idea:**

We count how many flowers can be placed (c) without putting two flowers next to each other.

**Approach:**

First, handle the special case where the flowerbed has only **one element**:

```cpp
if (f.size() == 1) {
    if (f[0] == 0)
        return (n <= 1);
}
```

For the first element, check only the next element:
```cpp
if (f[0] == 0 && f[1] == 0)
```

For the last element, check only the previous element:
```cpp
if (f[f.size() - 1] == 0 &&
    f[f.size() - 2] == 0)
```

For the middle elements, we need to check both neighbors. Therefore, the loop is executed only when the size is greater than 2.

The loop checks three consecutive positions. If all three are empty, the middle position can safely contain a flower.

Finally, if the number of flowers placed is at least n, return true:

Time Complexity: **O(n)**
Space Complexity: **O(1)**