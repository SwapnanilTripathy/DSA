class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int w) {
        vector<string> ans;
        int n=words.size();
        for(int i=0;i<n;) {
            int j=i,len=0;
            while(j<n && len+words[j].size()+j-i<=w) len+=words[j++].size();
            int sp=w-len,c=j-i;
            string s="";
            if(j==n || c==1) {
                for(int k=i;k<j;k++) {
                    if(k>i) s+=" ";
                    s+=words[k];
                }
                s+=string(w-s.size(),' ');
            }
            else {
                for(int k=i;k<j;k++) {
                    s+=words[k];
                    if(k<j-1) {
                        int x=sp/(c-1)+(k-i<sp%(c-1));
                        s+=string(x,' ');
                    }
                }
            }
            ans.push_back(s);
            i=j;
        }
        return ans;
    }
};