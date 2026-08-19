class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=INT_MIN;
        int best=INT_MIN;
        for(int j=k;j<n;j++){
            best=max(best,nums[j-k]);
            maxi=max(maxi,best+nums[j]);
        }
        return maxi;
    }
};