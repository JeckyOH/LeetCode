class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;

        int sign = (dividend > 0) ^ (divisor > 0) ? -1 : 1;

        long long dvd = labs(dividend);
        long long dvs = labs(divisor);

        int res = 0;
        while (dvd >= dvs)
        {
            int shift_bits = 1;

            while (dvd >= (dvs << shift_bits)) shift_bits++;

            dvd -= (dvs << (shift_bits - 1));
            res += ( 1 << (shift_bits - 1) );
        }

        return sign > 0 ? res : -res;
    }
};
