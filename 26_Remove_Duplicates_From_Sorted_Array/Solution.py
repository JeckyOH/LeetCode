class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        k = 0
        for i in range(len(nums)):
            if (i + 1 >= len(nums) or nums[i + 1] != nums[i]):
                if (i != k):
                    nums[i], nums[k] = nums[k], nums[i]
                k += 1
        return k
