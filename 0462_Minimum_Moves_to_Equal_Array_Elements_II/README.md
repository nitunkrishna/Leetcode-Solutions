# LeetCode 462 — Minimum Moves to Equal Array Elements II

**Difficulty:** Medium  
**Topic:** Principal, Array, Math, Sorting  
**Problem Link:** https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/description/

## Problem Summary
Given an integer array `nums`, find the minimum number of moves required to make all array elements equal. In one move, we can increment or decrement any element by 1.

## Approach

The key idea is to use the **Median** of the array.
- Sort the array in ascending order.
- Find the median using `nums[n/2]`.
- Calculate the absolute difference between each element and the median.
- Add all differences to get the minimum number of moves.

## Example

**Input:**
```cpp
nums = [1, 2, 3]
```

**Sorted Array:** `[1, 2, 3]`

**Median:** `2`

| Element | Moves |
|---|---:|
| 1 | 1 |
| 2 | 0 |
| 3 | 1 |

**Total Minimum Moves:** `1 + 0 + 1 = 2`

**Output:**
```cpp
2
```

## Complexity Analysis

- **Time Complexity:** `O(nlogn)`  
- **Space Complexity:** `O(1)` 

## Key Takeaways

- Median is used instead of Mean (Average).
- Sorting helps us find the median easily.
- `abs()` calculates the absolute difference.
- Sum of absolute differences from the median gives the minimum moves.

**Important:** For minimum sum of absolute differences, the optimal target is the median, not the average.
