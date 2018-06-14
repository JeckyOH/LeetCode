class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        s = s.lower()
        i = 0
        j = len(s) - 1
        while (i < j):
            if (not s[i].isalnum()):
                i += 1
            elif (not s[j].isalnum()):
                j -= 1
            elif (s[i] != s[j]):
                return False
            else:
                i += 1
                j -= 1
        return True
