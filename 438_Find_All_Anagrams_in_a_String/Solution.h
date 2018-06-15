class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.size() < p.size())
            return vector<int>();
        vector<int> p_counts(26,0), s_counts(26,0);
        vector<int> res;
        for(int i = 0; i < p.size(); i++)
        {
            p_counts[p[i] - 'a']++;
            s_counts[s[i] - 'a']++;
        }
        if (p_counts == s_counts)
            res.push_back(0);
        for(int i = 0; i <= s.size() - p.size(); i++)
        {
            s_counts[s[i] - 'a']--;
            s_counts[s[i + p.size()] - 'a']++;
            if(p_counts == s_counts)
                res.push_back(i + 1);
        }
        return res;
    }
};
