class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = -1;
        int max_len = 0;
        vector<int> counter(256, 0);

        while (i < s.size())
        {
            if (j + 1 < s.size() && counter[s[j+1]] == 0 )
            {
                counter[s[++j]]++;
                max_len = max(max_len, j - i + 1);
            }
            else
                counter[s[i++]]--;
        }

        return max_len;
    }
};
