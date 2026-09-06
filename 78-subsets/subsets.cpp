class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        ans.push_back({});
        int n=nums.size();

        for(int i=0;i<n;i++){
            int sz=ans.size();
            for(int j=0;j<sz;j++){
                vector<int> temp=ans[j];
                temp.push_back(nums[i]);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};