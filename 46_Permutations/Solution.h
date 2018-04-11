class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> cur_vec;
        recursive(cur_vec, nums);
        return this->result;
    }

    void recursive(vector<int>& cur_vec, const vector<int>& nums)
    {
        if(cur_vec.size() == nums.size())
            this->result.push_back(cur_vec);
        else
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (find(cur_vec.begin(), cur_vec.end(), nums[i]) == cur_vec.end())
                {
                    cur_vec.push_back(nums[i]);
                    recursive(cur_vec, nums);
                    cur_vec.pop_back();
                }
            }
        }
    }
private:
    vector<vector<int>> result;
};
