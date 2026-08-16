class Solution {
public:
    int digits(int n, int query) {
        int ct = 0;

        while (n > 0) {
            int digit = n % 10;
            if (digit == query) {
                ct++;
            }
            n = n / 10;
        }
        return ct;
    }

    int countDigitOccurrences(vector<int>& nums, int digit) {
        int n = nums.size();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += digits(nums[i], digit);
        }
        return sum;
    }
};