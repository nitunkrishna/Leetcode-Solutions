# 1614. Maximum Nesting Depth of the Parentheses

**Difficulty:** Easy  
**Topics:** Mid Level, String, Stack, Bracket Sequences
**Contest:** Weekly Contest 210
**Link:** https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/

## Approach
We can solve this problem using a simple counter to track the current nesting depth of parentheses.

- Initialize two variables:
  - ```depth = 0``` to track the current nesting depth.
  - ```res = 0``` to store the maximum nesting depth.
- Traverse the string using a for loop.
- If the current character is ```(```, increment depth by ```1``` because we have entered a new level of nesting.
- If the current character is ```)```, decrement depth by ```1``` because we have exited a level of nesting.
- After each operation, update ```res``` if the current depth is greater than the previous maximum.
- Finally, return ```res```.

## Complexity

- Time: O(n)
- Space: O(1)

## Key Learning
We can calculate the maximum nesting depth of parentheses using a simple counter instead of a stack.

- Increment the counter when encountering an opening parenthesis ```(```.
- Decrement the counter when encountering a closing parenthesis ```)```.
- Keep track of the maximum value of the counter throughout the traversal.

The maximum value of depth represents the maximum nesting depth of the parentheses.
