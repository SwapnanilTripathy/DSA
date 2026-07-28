class Solution {
public:
    string smallestPalindrome(string s) {
        map<char, int> mp;
        for (char ch : s) {
            mp[ch]++;
        }
        string left = "";
        string middle = "";
        for (auto it : mp) {
            left += string(it.second / 2, it.first);
            if (it.second % 2 == 1) {
                middle = it.first;
            }
        }
        string right = left;
        reverse(right.begin(), right.end());
        return left + middle + right;
    }
};