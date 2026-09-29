# 1331. Rank Transform of an Array

**Difficulty:** Easy  
**Topics:** Mid Level, Array, Hash Table, Sorting  
**Contest:** Biweekly Contest 18   
**Link:** https://leetcode.com/problems/rank-transform-of-an-array/description/

## Approach
We can solve this problem using Sorting and Binary Search.

- Create a copy of the original array named `v`.
- Sort `v` in ascending order.
- Remove duplicate elements using `unique()` and `erase()`.
- Initialize an empty vector `res` to store the ranks.
- Traverse the original array using a for loop.
- For each element:
    - Initialize `l = 0` and `h = v.size() - 1`.
    - Perform Binary Search to find the element's index in `v`.
    - If the element is found, store its index in `in`.
    - Add `1` to the index to get its rank.
    - Push the rank into `res`.
- Finally, return `res`.

## Complexity

- Time: O(nlog n)
- Space: O(n)

## Key Learning
We can use Sorting and Binary Search to find the rank of each element efficiently.

- Sorting arranges the elements in ascending order.
- `unique()` and `erase()` remove duplicate elements.
- Binary Search finds the index of each element in the sorted array.
- Adding `1` to the index gives the rank of the element.

Since the array is sorted and duplicates are removed, each unique element gets a distinct rank.
