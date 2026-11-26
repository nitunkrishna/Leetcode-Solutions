# 3360. Stone Removal Game

**Difficulty:** Easy  
**Topics:** Mid Level, Math, Simulation  
**Contest:** Biweekly Contest 144  
**Problem Link:** https://leetcode.com/problems/stone-removal-game/description/

## Approach

We can solve this problem by simulating the stone removal process and tracking the number of successful turns.

- Initialize `turn = 10`, representing the number of stones Alice must remove on the first turn.
- Initialize `cnt = 0` to count the number of successful turns.
- Use a while loop with the condition `n >= turn` to check whether the current player can remove the required number of stones.
- Inside the loop, subtract `turn` from `n` to remove the stones.
- Decrease `turn` by 1, as each subsequent turn requires one fewer stone to be removed.
- Increment `cnt` to track the successful turns.
- After the loop ends, return `true` if `cnt` is odd; otherwise, return `false`.

Since Alice starts first, an odd number of successful turns means Alice made the last successful move and won. An even number of successful turns means Bob made the last successful move and won.

## Code

```cpp
class Solution {
public:
    bool canAliceWin(int n) {
        int turn=10, cnt=0;
        while(n>=turn)
        {
            n-=turn;
            turn--;
            cnt++;
        }
        return (cnt%2!=0);
    }
};
```

## Complexity

- **Time:** O(1)
- **Space:** O(1)

Where,
- `n` = Initial number of stones.
The loop can execute at most 10 times because the required number of stones decreases from 10 to 1. Therefore, the time complexity is constant, O(1), and only a few variables are used, resulting in O(1) space complexity.
