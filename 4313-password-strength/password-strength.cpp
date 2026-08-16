class Solution {
public:
    int passwordStrength(string password) {
        unordered_map<char, int> mpp;
        int sum = 0;
        for (int i = 0; i < password.size(); i++) {
            char ch = password[i];
            if (mpp[ch] == 1) continue;
            mpp[ch] = 1;
            if (isupper(ch)) sum += 2;
            else if (islower(ch)) sum += 1;
            else if (isdigit(ch)) sum += 3;
            else if (ch == '!' || ch == '@' || ch == '#' || ch == '$') sum += 5;
        }
        return sum;
    }
};