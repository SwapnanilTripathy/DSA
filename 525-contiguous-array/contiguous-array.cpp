class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int> mpp;
        mpp[0]=-1;
        int sum=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) sum--;
            else sum++;
            if(mpp.find(sum)!=mpp.end()){
                maxi=max(maxi,i-mpp[sum]);
            }
            else mpp[sum]=i;
        }
        return maxi;
    }
};