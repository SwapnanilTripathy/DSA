class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        map<int, int> mpp;
        int n=nums.size();
        int q=queries.size();
        vector<int>ans;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == x) {
                cnt++;
                mpp[cnt] = i;
            }
        }
        for (int i = 0; i < q; i++) {
            if (mpp.find(queries[i]) != mpp.end()) {
                ans.push_back(mpp[queries[i]]);
            } else {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};