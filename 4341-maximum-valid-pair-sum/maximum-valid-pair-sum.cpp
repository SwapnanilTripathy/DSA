class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n=nums.size();
        int maxi=INT_MIN;
        int maxiii=INT_MIN;
        for(int j=k;j<n;j++){
            maxiii=max(maxiii,nums[j-k]);
            maxi=max(maxi,maxiii+nums[j]);
        }
        return maxi;
    }
};