class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result(digits);

        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] == 9)
                result[i] = 0;
            else
            {
                result[i] = digits[i] + 1;
                return result;
            }
        }

        result = vector<int>(digits.size() + 1, 0);
        result[0] = 1;
        return result;
    }
};
