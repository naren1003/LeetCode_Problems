# 1352. Product of the Last K Numbers

**Difficulty:** Medium  
**Topics:** Array, Design, Prefix Sum

## Approach: Prefix Product

- Maintain a list of prefix products.
- When adding a non-zero number, multiply it with the previous prefix product.
- When adding `0`, reset the prefix product list to `[1]`.
- To calculate the product of the last `k` numbers:
  - If `k` is greater than or equal to the prefix list size, return `0`.
  - Otherwise, divide the last prefix product by the prefix product before the last `k` elements.

## Complexity Analysis

- **Time Complexity:**
  - `add()`: O(1)
  - `getProduct()`: O(1)
- **Space Complexity:** O(n), where `n` is the number of elements since the last zero.