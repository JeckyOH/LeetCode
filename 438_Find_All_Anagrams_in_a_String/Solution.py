class Solution(object):
    def findAnagrams(self, s, p):
        """
        :type s: str
        :type p: str
        :rtype: List[int]
        """
        if (len(s) < len(p) ):
            return []
        result = []
        dict_s = {}
        dict_p = {}
        for i in range(len(p)):
            if (p[i] not in dict_p):
                dict_p[p[i]] = 0
            if (s[i] not in dict_s):
                dict_s[s[i]] = 0
            dict_p[p[i]] += 1
            dict_s[s[i]] += 1
        if (dict_p == dict_s):
            result.append(0)
        i = 0
        while i < len(s) - len(p):
            dict_s[s[i]] -= 1
            if (dict_s[s[i]] == 0):
                del(dict_s[s[i]])
            if (s[i + len(p)] not in dict_s):
                dict_s[s[i + len(p)]] = 0
            dict_s[s[i + len(p)]] += 1
            i += 1
            if (dict_s == dict_p):
                result.append(i)

        return result
