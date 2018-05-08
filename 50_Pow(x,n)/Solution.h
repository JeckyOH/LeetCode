class Solution {
public:
    double myPow(double x, int n) {
        unsigned abs_n = n > 0 ? n : -n;
        double res = 0;

        if (n == 0) return 1;
        if (n == 1) return x;

        double half = myPow(x, abs_n >> 1);

        if (abs_n % 2 == 0)
            res = half * half;
        else
            res = half * half * x;

        return (n > 0 ? res : 1.0/res);
    }
};
