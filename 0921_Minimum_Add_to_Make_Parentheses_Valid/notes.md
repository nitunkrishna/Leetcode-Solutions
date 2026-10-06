# 921. Minimum Add to Make Parentheses Valid

**Difficulty:** Medium  
**Topics:** Senior, String, Stack, Greedy, Bracket Sequences  
**Contest:** Weekly Contest 106
**Link:** https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/

## Approach
- Use two counters:
  - `l` keeps track of unmatched opening parentheses `(`.
  - `r` keeps track of how many opening parentheses `(` need to be added.

- Traverse the string from left to right.
  - If the current character is `(`, increment `l`.
  - If the current character is `)`:
    - If `l > 0`, match it with a previous unmatched `(` and decrement `l`.
    - Otherwise, there is no opening parenthesis available, so increment `r`.

- After traversing the entire string:
  - `l` represents the number of closing parentheses `)` that need to be added.
  - `r` represents the number of opening parentheses `(` that need to be added.

Therefore, the minimum number of additions required is: `l + r`

## Complexity
- **Time:** O(n)
- **Space:** O(1)

## Key Learning
Simply counting the total number of `(` and `)` is not enough because the **order of parentheses matters**. While traversing the string, we need to keep track of unmatched opening parentheses and immediately handle closing parentheses that do not have a matching opening parenthesis.
