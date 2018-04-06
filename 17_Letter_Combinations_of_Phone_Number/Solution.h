class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> mapping({"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"});
        vector<string> result({""});

        for(auto digit : digits)
        {
            string possible_chrs = mapping[digit - '0'];
            vector<string> tmp_res;

            for(auto possible_chr : possible_chrs)
            {
                for(auto str : result)
                {
                    tmp_res.push_back(str+possible_chr);
                }
            }

            result = tmp_res;
        }

        if(result.size() == 1 && result[0] == "")
            result.clear();

        return result;
    }
};
