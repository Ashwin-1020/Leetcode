class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int n = nums.size(), sum = 0;
    for (int i = 0; i < n; ++i) {
        int left = (i - k >= 0) ? nums[i - k] : INT_MIN;
        int right = (i + k < n) ? nums[i + k] : INT_MIN;
        if (nums[i] > left && nums[i] > right)
            sum += nums[i];
    }
    return sum;
    }
};