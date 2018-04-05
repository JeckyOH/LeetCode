class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        int max_area = 0;
        while (i < j)
        {
            int area = (j - i)*(height[i] > height[j] ? height[i] : height[j]);
            max_area = (max_area > area) ? max_area : area;
            if(height[i] > height[j]) j--;
            else i++;
        }

        return max_area;
    }
};
