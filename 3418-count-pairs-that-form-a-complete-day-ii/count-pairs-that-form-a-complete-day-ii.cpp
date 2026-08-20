class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        int n=hours.size();
        for(int i=0;i<n;i++){
            hours[i]%=24;
        }
        unordered_map<int,int> mpp;
        int more=0;
        long ct=0;
        for (int i = 0; i < n; i++) {
            int more = 24 - hours[i];
            if(hours[i]==0) more=0;
            if (mpp.find(more) != mpp.end()) {
                ct+=mpp[more];
            }
            mpp[hours[i]]++;
        }
    return ct;    
    }
};