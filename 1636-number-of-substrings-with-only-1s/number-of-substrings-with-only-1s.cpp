class Solution {
public:
    int numSub(string s) {
        long long ct=0;
        int n=s.size();
        long long sum=0;

        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                ct++;
                sum=(sum+ct)%1000000007;
            }
            else{
                ct=0;
            }
        }

        return sum;
    }
};