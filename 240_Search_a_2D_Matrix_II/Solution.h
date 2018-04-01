class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty())
            return false;
        int rows = matrix.size();
        int columns = matrix[0].size();

        int row = 0, column = columns - 1;
        while (row < rows && column >= 0)
        {
            if (matrix[row][column] == target)
                return true;
            else if (matrix[row][column] > target)
                column--;
            else
                row++;
        }

        return false;
    }
};
