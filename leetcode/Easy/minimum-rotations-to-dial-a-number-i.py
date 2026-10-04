// Problem: Minimum Rotations to Dial a Number I
// Platform: leetcode
// Rating/Difficulty: Easy
// Language: python3
// Verdict: Accepted
// URL: https://leetcode.com/problems/minimum-rotations-to-dial-a-number-i/
// Solved on: 2026-10-04T02:50:25.814Z

class Solution:
    def minRotations(self, s: str) -> int:
        total = 0

        previous = 0
        current = 0

        for i in range(0, len(s)):
            current = int(s[i])

            rotations = abs(previous-current)
            rotations = min(rotations, 10 - rotations)

            total += rotations

            previous = current

        return total
            