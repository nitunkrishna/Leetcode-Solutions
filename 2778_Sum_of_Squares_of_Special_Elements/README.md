# 2778. Sum of Squares of Special Elements

**Difficulty:** Easy  
**Topics:** Mid Level, Array, Enumeration  
**Contest:** Weekly Contest 354  
**Link:** https://leetcode.com/problems/sum-of-squares-of-special-elements/description/

## Approach
We can solve this problem using a simple loop to calculate the sum of squares of special elements in the array.
- Initialize two variables:
  - `res=0` to store the sum of squares of special elements.
  - `n=nums.size()` to store the length of the array.
- Traverse the array using a for loop.
- Convert the 0-based index to a 1-based index using `j=i+1`.
- Check if `n%j==0` to determine whether the current index is special.
- If the condition is true, add the square of the current element to `res` using `res+=nums[i]*nums[i]`.
- Finally, return `res`.

## Complexity

- Time: O(n)
- Space: O(1)

## Key Learning
We can calculate the sum of squares of special elements using a single loop and the modulo operator.

- Convert 0-based indexing to 1-based indexing using `i+1`.
- Use `n%j==0` to check whether the current index divides the array length evenly.
- Square the special element using `nums[i]*nums[i]`.
- Use `+=` to accumulate the sum instead of overwriting the previous result.

The final value of `res` represents the sum of squares of all special elements in the array.
