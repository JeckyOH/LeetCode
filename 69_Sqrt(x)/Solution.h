class Solution {
public:
    int mySqrt(int x) {
        // binary search to find a number k between [0, x]
        // so that k * k <= x < (k + 1)*(k + 1)
        if (x == 0) return 0;
        int low = 1, high = x;

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (mid > x / mid)
                high = mid - 1;
            else
            {
                if ( (mid + 1) > (x / (mid + 1)) )
                    return mid;
                else
                    low = mid + 1;
            }
        }

    }
};
