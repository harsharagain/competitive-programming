class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """

        runningSum = 0
        result = []

        for num in nums:
            result.append(num + runningSum)
            runningSum += num

        return result
        
        