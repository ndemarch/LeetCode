class Solution:
    def findValueOfPartition(self, nums: List[int]) -> int:
        nums.sort()
        minimum = 10**9
        for i in range(1,len(nums)):
            difference = nums[i] - nums[i-1]
            if difference < minimum:
                minimum = difference
        return minimum
