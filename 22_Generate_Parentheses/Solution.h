class Solution {
public:
    vector<string> generateParenthesis(int n) {
        result.clear();

        recursive("", 0, 0, n);

        return this->result;
    }

private:
    void recursive(string cur_str, int left, int right, int n)
    {
        if (cur_str.size() == 2 * n)
        {
            this->result.push_back(cur_str);
            return;
        }

        if (left < n)
            recursive(cur_str + '(', left + 1, right, n);
        if (right < left)
            recursive(cur_str + ')', left, right + 1, n);
    }

    vector<string> result;
};
