class Solution(object):
    def minSubArrayLen(self, s, nums):
        """
        :type s: int
        :type nums: List[int]
        :rtype: int
        """
        i = 0
        j = -1
        summ = 0
        min_len = sys.maxint

        while (i < len(nums)):
            if ((j + 1) < len(nums) and summ < s):
                j += 1
                summ += nums[j]
            else:
                if (summ >= s):
                    min_len = min(min_len, j - i + 1)
                summ -= nums[i]
                i += 1

        if (min_len == sys.maxint):
            min_len = 0

        return min_len
