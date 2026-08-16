class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int ct = 0;
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                ct++;
            }
            if (i >= k) {
                if (s[i-k] == 'a' || s[i-k] == 'e' || s[i-k] == 'i' || s[i-k] == 'o' || s[i-k] == 'u') {
                    ct--;
                }
            }
            maxi = max(maxi, ct);
        }
        return maxi;
    }
};