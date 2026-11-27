# 3946. Maximum Number of Items From Sale I

**Difficulty:** Medium  
**Topics:** Array, Greedy, Math, Number Theory

## Approach: Greedy + Enumeration

- Identify the items that can provide the maximum number of free copies based on their factors.
- Buying at least one copy of an item grants one free copy of every other item whose factor is divisible by its factor.
- Additional purchases of the same item do not provide extra free copies.
- Calculate the total cost and number of free items for each possible combination of purchased item types.
- Use the remaining budget to purchase additional copies of the cheapest available item.
- Track the maximum total number of purchased and free items.

## Complexity Analysis

- **Time Complexity:** Depends on the enumeration strategy and number of items.
- **Space Complexity:** Depends on the auxiliary data structures used.