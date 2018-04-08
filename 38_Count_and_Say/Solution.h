class Solution {
public:
    string countAndSay(int n) {
        string res("1");

        while(--n)
        {
            string cur_str("");
            char prev_chr = '0';
            int counter = 1;

            for (auto chr : res)
            {
                if(chr == prev_chr)
                    counter++;
                else if (prev_chr != '0')
                {
                    cur_str += (to_string(counter) + prev_chr );
                    counter = 1;
                }
                prev_chr = chr;
            }

            cur_str += (to_string(counter) + prev_chr );
            res = cur_str;
        }

        return res;
    }
};
