class Solution {
public:
    int numFriendRequests(vector<int>& ages) {

        vector<int> freq(121, 0);

        for (int age : ages)
            freq[age]++;

        int ans = 0;

        for (int a = 1; a <= 120; a++) {
            for (int b = 1; b <= 120; b++) {

                if (b <= 0.5 * a + 7) continue;
                if (b > a) continue;
                if (b > 100 && a < 100) continue;

                if (a == b)
                    ans += freq[a] * (freq[a] - 1);
                else
                    ans += freq[a] * freq[b];
            }
        }

        return ans;
    }
};