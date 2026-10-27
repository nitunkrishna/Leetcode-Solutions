# 3963. Unique Paths Grid Construction

**Difficulty:** Easy  
**Topics:** Mid Level  
**Contest:** Biweekly Contest 185

## Approach

We can solve this problem by creating a grid where only the first row and the last column contain free cells (`.`), while all other cells contain obstacles (`#`). This ensures exactly one valid path from the top-left cell to the bottom-right cell.

- Initialize a 2D character grid using `vector<string> res(m, string(n, '#'))`, where all cells initially contain `#`.
- Traverse the first row using a for loop from `0` to `n-1`.
- Set `res[0][i]='.'` to make every cell in the first row free.
- Traverse all rows using another for loop from `0` to `m-1`.
- Set `res[i][n-1]='.'` to make every cell in the last column free.
- All remaining cells stay blocked with `#`, preventing alternative paths.
- Finally, return `res`.

## Complexity

- **Time:** O(m × n)
- **Space:** O(m × n)

Where,

- `m` = Number of rows in the grid.
- `n` = Number of columns in the grid.

Although the two loops take O(m + n) time, initializing the entire grid requires O(m × n) time.

## Key Learning

We can construct a grid with exactly one valid path by keeping the first row and last column free while blocking all other cells.
The final grid contains exactly one valid path: move right along the first row, then move down along the last column.
