class Solution {
public:
    bool isThree(int n) {
        int root = (int) sqrt(n);
    if (root * root != n) return false;

    if (root < 2) return false;
    for (int i = 2; i * i <= root; ++i) {
        if (root % i == 0) return false;
    }
    return true;
    }
};