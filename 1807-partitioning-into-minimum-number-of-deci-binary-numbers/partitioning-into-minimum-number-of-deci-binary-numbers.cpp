class Solution {
public:
    int minPartitions(string n) {
        int len=n.size();
        int maxi=0;
        for(int i=0;i<len;i++){
            int x=n[i]-'0';
            maxi=max(maxi,x);
        }
        return maxi;
    }
};