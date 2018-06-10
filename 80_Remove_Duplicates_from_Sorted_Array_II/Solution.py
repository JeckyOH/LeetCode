class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        k = 0 # [0, k) contains numbers who can appear at most twice
        for i in range(len(nums)):
            if ( (i + 2) >= len(nums) or nums[i + 2] != nums[i] or nums[i + 1] != nums[i] ):
                if (i != k):
                    nums[k], nums[i] = nums[i], nums[k]
                k += 1
        return k
