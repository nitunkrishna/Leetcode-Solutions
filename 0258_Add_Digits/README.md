# LeetCode 258 - Add Digits

**Difficulty:** Easy  
**Topic:** Math, Simulation, Number Theory  
**Link:** https://leetcode.com/problems/add-digits/description/

## Problem Description

Given an integer `num`, repeatedly add all its digits until the result has only one digit, and return it.

**Example 1:**

```text
Input: num = 38
Output: 2
```

**Explanation:**

```text
38 → 3 + 8 = 11
11 → 1 + 1 = 2
```

Since `2` is a single-digit number, the final result is `2`.

**Example 2:**

```text
Input: num = 0
Output: 0
```

## Approach: Iterative Digit Sum

The solution uses nested `while` loops to repeatedly calculate the sum of the digits until the number becomes a single digit.

**Steps:**

1. Use an outer `while` loop that continues as long as `num >= 10`.
2. Initialize `sum = 0` at the beginning of each iteration.
3. Use an inner `while` loop to extract each digit using `num % 10`.
4. Add the extracted digit to `sum`.
5. Remove the last digit using integer division (`num /= 10`).
6. Assign `sum` back to `num` and repeat until `num < 10`.
7. Return the final single-digit number.

## C++ Solution

```cpp
class Solution
{
public:
    int addDigits(int num)
    {
        while(num >= 10)
        {
            int sum = 0;
            while(num != 0)
            {
                int dig = num % 10;
                sum += dig;
                num /= 10;
            }
            num = sum;
        }
        return num;
    }
};
```

## Dry Run

**Input:** `num = 9875`

| Iteration | Current Number | Digit Sum |
|---|---|---|
| 1 | 9875 | 9 + 8 + 7 + 5 = 29 |
| 2 | 29 | 2 + 9 = 11 |
| 3 | 11 | 1 + 1 = 2 |

**Output:** `2`

## Complexity Analysis

- **Time Complexity:** `O(log n)`
  — Each digit-summing pass processes the digits of the current number. The first pass dominates the total work.
- **Space Complexity:** `O(1)`
  — Only a few integer variables are used, regardless of the input size.

## Key Concepts

- Nested `while` loops
- Modulo operator (`%`)
- Integer division (`/`)
- Digit extraction
- Iterative problem solving
