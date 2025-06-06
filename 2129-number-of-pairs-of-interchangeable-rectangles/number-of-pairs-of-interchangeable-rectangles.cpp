class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<long long,int> freq;
        long long res = 0;
        for(auto& r : rectangles) {
            int g = gcd(r[0], r[1]);
            long long key = (long long)(r[0]/g)*1e9 + (r[1]/g);
            freq[key]++;
        }
        for(auto& [k,v]: freq)
            res += (long long)v*(v-1)/2;
        return res;
    }
};