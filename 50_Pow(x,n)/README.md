### Analysis

Normally, to calculate x^n, we need to calculate x * x * x......* x.
If the time of multiplication is regarded as time unit, x^n needs O(n) time.

Now, we use divide and conquer method to reduce the number of multiplication from O(n) to O(lgn).

```
pow(x, n):
if n < 0: 
    return pow(x, -n)
if n == 0: 
    return 1
if n == 1: 
    return x
half = pow(x, n / 2)
if n % 2 == 0:
    return half * half
else:
    return half * half * x
```
