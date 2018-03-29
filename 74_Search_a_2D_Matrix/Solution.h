class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty())
            return false;

        int rows = matrix.size();
        int colums = matrix[0].size();

        int low = 0, high = rows * colums - 1;

        while(low <= high)
        {
            int mid = (low + high) / 2;
            if(matrix[mid / colums][mid % colums] == target)
                return true;
            else if (matrix[mid / colums][mid % colums] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return false;
    }
};
