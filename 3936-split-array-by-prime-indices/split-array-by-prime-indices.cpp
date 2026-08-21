class Solution {
public:
    bool prime(int n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    long long splitArray(vector<int>& nums) {
        long long sum1=0;
        long long sum2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(prime(i)) sum1+=nums[i];
            else sum2+=nums[i];
        }
    return abs(sum1-sum2);    
    }
};