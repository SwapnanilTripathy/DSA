class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int maxindex=-1;
        int minindex=-1;
        for(int i=0;i<n;i++){
            if(maxi<nums[i]){
                maxi=nums[i];
                maxindex=i;
            }
            if(mini>nums[i]){
                mini=nums[i];
                minindex=i;
            }
        }
        int a=max(maxindex,minindex)+1;
        int b=n-min(minindex,maxindex);
        int c=(min(minindex,maxindex)+1)+(n-max(minindex,maxindex));

        return min({a,b,c});
    }
};