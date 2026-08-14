class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        int n = message.size();
        int k = bannedWords.size();
        unordered_set<string> banned;
        for(int i = 0; i < k; i++) {
            banned.insert(bannedWords[i]);
        }
        int ct = 0;
        for(int i = 0; i < n; i++) {
            if(banned.count(message[i])) ct++;
            if(ct >= 2) return true;
        }
        return false;
    }
};