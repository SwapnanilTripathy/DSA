class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int n=s.size();
        int cta=0;
        int ctb=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a') cta++;
            else ctb++;
        }
    return abs(cta-ctb);   
    }
};