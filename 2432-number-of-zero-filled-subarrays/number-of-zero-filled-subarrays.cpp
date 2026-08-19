class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int ct=0;
        long sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                ct++;
                sum=sum+ct;
            }
            else{
                ct=0;
            }
        }
    return sum;    
    }
};