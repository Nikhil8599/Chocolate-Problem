#  Chocolate Problem #1 – Tiling 2×N Corridor

## Author
- Nikhil Kumar Jha
- Roll: 2305716
- College: Kalinga Institue of Industrial Technology(KIIT), Bhubaneswar
- I analyzed the tiling patterns for small values of N and derived a recurrence:

- dp[n] = dp[n-1] + dp[n-2] + 2×dp[n-3]

Since N can be as large as 10^15, a simple DP approach is not efficient.
So I converted the recurrence into matrix form and used fast exponentiation
to compute the result in O(log N) time.
---

## Problem Statement
We are given a 2×N corridor and two types of tiles:
- I-shaped (2×1 domino)
- L-shaped tiles (rotations allowed)

Find number of ways to tile the corridor.

---

## Approach

Let dp[n] = number of ways to tile 2×n board.

From observation:

dp[n] = dp[n-1] + dp[n-2] + 2×dp[n-3]

- dp[n-1] → vertical tile
- dp[n-2] → horizontal tiles
- dp[n-3] → L-shaped tiles

Since N can be very large, we use **Matrix Exponentiation**.

---

## Complexity

- Time: O(log N)
- Space: O(1)

---

## Sample Input
- 3

## Output
- 5

- ---

## 🚀 Code
See `solution.cpp`
