class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> positions;
        int n = boxes.size();
        vector<int> ans(n, 0);
        for (int i = 0; i < n; i++) {
            if (boxes[i] == '1') {
                positions.push_back(i);
            }
        }
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = 0; j < positions.size(); j++) {
                sum += abs(i - positions[j]);
            }
            ans[i] = sum;
        }
        return ans;
    }
};