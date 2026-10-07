## Problem: Diagonal Difference
**Platform:** HackerRank  
**Target Complexity:** Time: $O(N)$, Space: $O(1)$

### Approach
Iterated through the $N \times N$ matrix in a single loop from $i = 0$ to $N - 1$. Calculated the primary diagonal sum using `arr[i][i]` and the secondary diagonal sum using `arr[i][n - 1 - i]`, taking the absolute difference of both sums.

### Complexity
- **Time Complexity:** $O(N)$ — traverses the matrix along single row indices.
- **Space Complexity:** $O(1)$ — auxiliary space is independent of matrix dimensions.