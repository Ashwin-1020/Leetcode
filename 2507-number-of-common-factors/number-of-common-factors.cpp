class Solution {
public:
    int commonFactors(int a, int b) {
        int gcd_val = __gcd(a, b);
    int count = 0;
    int limit = (int) sqrt(gcd_val);
    for (int i = 1; i <= limit; ++i) {
        if (gcd_val % i == 0) {
            count++;
            if (i != gcd_val / i)
                count++;
        }
    }
    return count;
    }
};