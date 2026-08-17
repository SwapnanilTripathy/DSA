class Solution {
public:
    int digitsum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    int maximumSum(vector<int>& nums) {
        map<int, int> mpp;
        int ans = -1;
        for (int i = 0; i < nums.size(); i++) {
            int sum = digitsum(nums[i]);
            if (mpp.find(sum) != mpp.end()) {
                ans = max(ans, nums[i] + mpp[sum]);
            }
            mpp[sum] = max(mpp[sum], nums[i]);
        }
        return ans;
    }
};