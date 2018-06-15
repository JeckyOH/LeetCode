class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        max_len = 0
        i = 0
        j = -1

        while (i < len(s)):
            if (j + 1 < len(s) and s[j + 1] not in s[i: j+1]):
                j += 1
                max_len = max(max_len, j - i + 1)
            else:
                i += 1

        return max_len
