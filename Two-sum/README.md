# 1. Two Sum

**Difficulty:** Easy  
**Topics:** Array, Hash Table

## Approach: Hash Map

- Create a hash map to store each number and its index.
- Iterate through the array.
- For each number, calculate its complement: `target - nums[i]`.
- Check if the complement already exists in the hash map.
- If found, return the current index and the complement's index.
- Otherwise, store the current number and its index in the hash map.

## Complexity Analysis

- **Time Complexity:** O(n) — Single traversal of the array with O(1) average hash map operations.
- **Space Complexity:** O(n) — Hash map stores up to n elements.