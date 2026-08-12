class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftSum(n, 0);
        vector<int> rightSum(n, 0);
        vector<int> ans(n);
        int left = 0;
        int right = 0;
        for (int i = 1; i < n; i++) {
            left += nums[i - 1];
            leftSum[i] = left;
        }
        for (int i = n - 2; i >= 0; i--) {
            right += nums[i + 1];
            rightSum[i] = right;
        }
        for (int i = 0; i < n; i++) {
            ans[i] = abs(leftSum[i] - rightSum[i]);
        }
        return ans;
    }
};