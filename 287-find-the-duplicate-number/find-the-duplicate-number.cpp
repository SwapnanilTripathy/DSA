class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int num : nums) {
            if (mp.count(num))
                return num;
            mp[num]++;
        }
        return -1;
    }
};