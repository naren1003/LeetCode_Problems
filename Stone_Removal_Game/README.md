# 3360. Stone Removal Game

**Difficulty:** Easy  
**Topics:** Math, Simulation, Game Theory

## Approach: Simulation

- Alice starts by removing 10 stones.
- Each subsequent turn requires removing 1 fewer stone than the previous turn.
- Alternate between Alice and Bob until the current player cannot make a move.
- If Alice cannot make a move, return `false`.
- If Bob cannot make a move, return `true`.

## Complexity Analysis

- **Time Complexity:** O(1) — At most 10 turns are possible.
- **Space Complexity:** O(1) — Only a constant amount of extra space is used.