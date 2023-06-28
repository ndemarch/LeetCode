class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        #majority = len(nums) // 2
        #unique = set(nums)
        #for num in unique:
        #    if nums.count(num) > majority:
        #        return num
        count = 0
        candidate = 0
        for num in nums:
            if count == 0:
                candidate = num
            if num == candidate:
                count += 1
            else:
                count -= 1
        return candidate

  # I have included a second way to solve the problem, commented out, however it does not meet the time and space requirements.
