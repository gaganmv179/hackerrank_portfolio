## Problem: Sparse Arrays
**Platform:** HackerRank  
**Target Complexity:** Time: $O(N + Q)$, Space: $O(N)$

### Approach
Built a frequency lookup table using `std::unordered_map` over input strings, optimizing query lookups to average $O(1)$ amortized time.

### Complexity
- **Time Complexity:** $O(N + Q)$ average — $N$ insertions into hash map, followed by $Q$ constant-time lookups.
- **Space Complexity:** $O(N)$ — stores unique elements from the string list in hash map storage.