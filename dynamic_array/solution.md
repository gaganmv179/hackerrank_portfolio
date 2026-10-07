## Problem: Dynamic Array
**Platform:** HackerRank  
**Target Complexity:** Time: $O(N + Q)$, Space: $O(N)$

### Approach
Maintained a 2D dynamic vector structure containing $N$ 1D vectors. Evaluated bitwise queries dynamically using `(x ^ lastAnswer) % n` to locate target sub-vectors, updating `lastAnswer` on query Type 2.

### Complexity
- **Time Complexity:** $O(N + Q)$ — processes $Q$ queries with amortized $O(1)$ dynamic vector operations.
- **Space Complexity:** $O(N)$ — stores total elements across nested vectors.