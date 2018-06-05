class Solution_1(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        non_zero = []
        for num in nums:
            if (num != 0):
                non_zero.append(num)
        for i in range(len(non_zero)):
            nums[i] = non_zero[i]
        for i in range(len(non_zero), len(nums)):
            nums[i] = 0

class Solution_2(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        k = 0
        for i in range(len(nums)):
            if (nums[i] != 0):
                if (i != k):
                    nums[i], nums[k] = nums[k], nums[i]
                k += 1
