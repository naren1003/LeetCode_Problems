3411. Maximum Subarray With Equal Products
Difficulty: Easy
Topics: Array, Math, Number Theory
Language: C++
Problem Statement
You are given an array of positive integers nums.

An array arr is called product equivalent if:
\[
\operatorname{prod}(arr) = \operatorname{lcm}(arr) \times \operatorname{gcd}(arr)
\]
where:
- prod(arr) is the product of all elements in arr.
- gcd(arr) is the greatest common divisor of all elements in arr.
- lcm(arr) is the least common multiple of all elements in arr.
Return the length of the longest product equivalent subarray of nums.

A subarray is a contiguous, non-empty part of an array.
Examples
Example 1
Input:
nums = [1,2,1,2,1,1,1]
Output:
5
Explanation:

The longest product equivalent subarray is [1,2,1,1,1].
- Product = 2
- GCD = 1
- LCM = 2
Since 2 == 1 * 2, the subarray is product equivalent. Its length is 5.
Example 2
Input:
nums = [2,3,4,5,6]
Output:
3
Explanation:

The longest product equivalent subarray is [3,4,5].
Example 3
Input:
nums = [1,2,3,1,4,5,1]
Output:
5
Constraints
- 2 <= nums.length <= 100
- 1 <= nums[i] <= 10
Approach: Brute Force
1. Fix the starting index i of the subarray.
2. Initialize product, gcd, and lcm using nums[i].
3. Extend the subarray by moving the ending index j.
4. Update the product, GCD, and LCM for every new element.
5. If product == gcd * lcm, update the maximum length using j - i + 1.
Because all elements are positive and the constraints are small, we can use long long for the product and LCM.