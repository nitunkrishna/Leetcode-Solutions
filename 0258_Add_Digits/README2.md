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

## Approach: Recursive Digit Sum

The solution uses **recursion** to repeatedly calculate the sum of the digits until the number becomes a single digit.

**Steps:**

1. Check whether `num < 10`. If true, return `num` as the base case.
2. Otherwise, initialize `sum = 0`.
3. Use a `while` loop to extract each digit using `num % 10`.
4. Add each extracted digit to `sum`.
5. Remove the last digit using integer division (`num /= 10`).
6. Recursively call `addDigits(sum)` to repeat the process.
7. Continue until the base case is reached and return the final single-digit number.

## C++ Solution

```cpp
class Solution {
public:
    int addDigits(int num) {
        if(num<10) return num;
        else
        {
            int sum=0;
            while(num!=0)
            {
                int dig=num%10;
                sum+=dig;
                num/=10;
            }
            return addDigits(sum);
        }
    }
};
```

## Dry Run

**Input:** `num = 9875`

| Recursive Call | Current Number | Digit Sum |
|---|---|---|
| `addDigits(9875)` | 9875 | 9 + 8 + 7 + 5 = 29 |
| `addDigits(29)` | 29 | 2 + 9 = 11 |
| `addDigits(11)` | 11 | 1 + 1 = 2 |
| `addDigits(2)` | 2 | Base case: Return 2 |

**Output:** `2`

## Complexity Analysis

- **Time Complexity:** `O(log n)`
  — Each recursive call processes the digits of the current number. The total work is dominated by the initial digit-summing pass.
- **Space Complexity:** `O(log n)`
  — Recursive function calls consume stack memory. This is a conservative upper bound; the recursion depth is much smaller in practice.

## Key Concepts

- Recursion
- Base case and recursive case
- Modulo operator (`%`)
- Integer division (`/`)
- Digit extraction
- Recursive problem solving
