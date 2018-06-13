class Solution_01(object):
    def sortColors(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        counter = [0] * 3
        for num in nums:
            counter[num] += 1
        for i in range(len(nums)):
            if (i < counter[0]):
                nums[i] = 0
            elif ( i < (counter[1] + counter[0]) ):
                nums[i] = 1
            else:
                nums[i] = 2

class Solution_2(object):
    def sortColors(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        zero = -1 # [0, zero] contains number 0
        i = 0 # i is iteration pointer, (zero, i) contains number 1
        two = len(nums) # [two, len(nums) - 1] contains number 2

        while (i < two) :
            if (nums[i] == 0):
                zero += 1
                nums[ i ], nums[ zero ] = nums[zero], nums[i]
                i += 1
            elif (nums[i] == 2):
                two -= 1
                nums[two], nums[i] = nums[i], nums[two]
            else:
                i += 1
