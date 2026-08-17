class Solution {
public:
    bool prime(int n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums){
        int n = nums.size();
        int maxi = 0;
        int mini = n;

        for (int i = 0; i < n; i++) {
            if (prime(nums[i])) {
                maxi = max(maxi, i);
                mini = min(mini, i);
            }
        }
        return maxi - mini;
    }
};