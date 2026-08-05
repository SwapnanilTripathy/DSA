class Solution {
public:
    string reverseVowels(string s) {
        map<int, char> mp;
        vector<char> vowels;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                mp[i] = ch;
                vowels.push_back(ch);
            }
        }
        reverse(vowels.begin(), vowels.end());
        int j = 0;
        for (auto it : mp) {
            s[it.first] = vowels[j++];
        }
        return s;
    }
};