### Analysis

Here, I need to calculate "dvd / dvs", which means how many "dvs" contained in the "dvd".

Remember, the multiplication, division and mod have been forbiden.
In order to calculate "how many", there are 2 another method:
1. sum
2. bit manipulation
Of course we choose bit manipulation.

#### Apply bit manipulation to calculate "how many"

dvs <<= 1 <=> dvs *= 2, dvd >= dvs means there are 2 dvs in the dvd, so continue calculate dvs <<= 1.
`
int shift\_bits = 1;
while (dvd >= (dvs << shift\_bits)) shift\_bits++;
int how\_many = (1 << (shift\_bits - 1));
dvd = dvd - (dvs << (shift\_bits - 1));
`

Then, for example 10 / 3, after applying above steps, dvd = 4, dvs = 3;
We need to continue applying above steps to calculate 4 / 3.

Finally, the result will be 2 + (4 / 3) = 3.
