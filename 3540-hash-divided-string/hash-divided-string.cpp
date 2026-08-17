class Solution {
public:
    string stringHash(string s, int k) {
        int n = s.size();
        int sum = 0;
        int ct = 0;
        string ans = "";

        for (int i = 0; i < n; i++) {
            sum += (s[i] - 'a');
            ct++;
            if (ct == k) {
                sum %= 26;
                char ch = sum + 'a';
                ans += ch;
                sum = 0;
                ct = 0;
            }
        }
        return ans;
    }
};