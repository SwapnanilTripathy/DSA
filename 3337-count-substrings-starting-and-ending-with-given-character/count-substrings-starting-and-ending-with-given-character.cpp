class Solution {
public:
    long long countSubstrings(string s, char c) {
        int n=s.size();
        int ct=0;
        long long sum=0;
        for(int i=0;i<n;i++){
            if(s[i]==c){
                ct++;
                sum+=ct;
            }
        }
    return sum;    
    }
};