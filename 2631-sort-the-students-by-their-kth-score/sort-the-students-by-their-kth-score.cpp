class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k){
        map<int, int, greater<int>> mpp;
        vector<vector<int>> ans;
        int n = score.size();
        for (int i = 0; i < n; i++){
            mpp[score[i][k]] = i;
        }
        for (auto p : mpp){
            ans.push_back(score[p.second]);
        }
        return ans;
    }
};