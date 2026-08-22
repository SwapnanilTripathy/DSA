class Solution {
public:
    bool isIsomorphic(string s,string t) {
        int n=s.size();
        if(n!=t.size()) return false;
        int mpp1[256]={0};
        int mpp2[256]={0};
        for(int i=0;i<n;i++){
            if(mpp1[s[i]]!=mpp2[t[i]]) return false;
            mpp1[s[i]]=i+1;
            mpp2[t[i]]=i+1;
        }
        return true;
    }
};