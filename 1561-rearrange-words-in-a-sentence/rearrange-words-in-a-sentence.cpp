class Solution {
public:
    string arrangeWords(string text) {
        text[0] = tolower(text[0]);
        stringstream ss(text);
        vector<string> arr;
        string word;
        //New thing learned(Need to do this again)
        while (ss >> word) {
            arr.push_back(word);
        }
        //New thing Learned 
        stable_sort(arr.begin(), arr.end(), [](string a, string b) {
            return a.size() < b.size();
        });
        arr[0][0] = toupper(arr[0][0]);
        string ans = "";
        for (int i = 0; i < arr.size(); i++) {
            ans += arr[i] + " ";
        }
        ans.pop_back();
        return ans;
    }
};