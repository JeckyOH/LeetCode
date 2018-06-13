class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: void Do not return anything, modify nums1 in-place instead.
        """
        k = m + n -1 # k is next filled position in nums1 [k, m+n-1] contains merged sorted array in right place
        i = m - 1 # [0, i] contains elements in nums1 waiting to be compared
        j = n - 1 # [0, j] contains elements in nums2 waiting to be compared

        while j >= 0:
            if (i >= 0 and nums1[i] > nums2[j]):
                nums1[k] = nums1[i]
                i -= 1
            else:
                nums1[k] = nums2[j]
                j -= 1
            k -= 1
