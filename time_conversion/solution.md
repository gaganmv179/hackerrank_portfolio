## Problem: Time Conversion
**Platform:** HackerRank  
**Target Complexity:** Time: $O(1)$, Space: $O(1)$

### Approach
Parsed the fixed 10-character timestamp string. Modified the leading two hour digits based on whether the meridian indicator was `"AM"` or `"PM"` and whether the hour equaled `12`.

### Complexity
- **Time Complexity:** $O(1)$ — input length is invariant (10 characters).
- **Space Complexity:** $O(1)$ — constant string formatting overhead.