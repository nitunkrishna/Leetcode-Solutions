# 2089. Find Target Indices After Sorting Array

**Difficulty:** Easy  
**Topics:** Mid Level, Array, Binary Search, Sorting  
**Link:** https://leetcode.com/problems/find-target-indices-after-sorting-array/description/  
**Contest:** Weekly Contest 269

## Approach
We can solve this problem by sorting the array and finding all indices where the element is equal to the target.

- Sort the array in ascending order using `sort(nums.begin(), nums.end())`.
- Initialize an empty vector `res` to store the indices of the target elements.
- Traverse the sorted array using a for loop.
- Check if `nums[i]==target` to determine whether the current element matches the target.
- If the condition is true, add the current index to `res` using `res.push_back(i)`.
- Finally, return `res`.

## Complexity

- Time: O(nlogn)
- Space: O(n)  
  Where,  
  n=Size of vector nums.
## Key Learning
We can find all target indices in a sorted array using sorting and a simple loop.

- Use `sort(nums.begin(), nums.end())` to sort a vector in ascending order.
- Use `vector<int>res` to store multiple indices.
- Use `nums[i]==target` to check whether an element matches the target.
- Use `push_back(i)` to add an index to the result vector.
- Do not return immediately after finding a match because the target may appear multiple times.
- Return the result vector after completing the loop.

The final vector `res` contains all indices where the target appears in the sorted array, in ascending order.
