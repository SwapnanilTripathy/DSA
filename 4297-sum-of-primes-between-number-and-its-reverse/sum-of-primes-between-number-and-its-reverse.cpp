class Solution {
public:
    bool prime(int n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
    int sumOfPrimesInRange(int n) {
        int sum = 0;
        int reverse = 0;
        int temp = n;
        while (temp > 0) {
            int digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp /= 10;
        }
        int start = min(n, reverse);
        int end = max(n, reverse);
        for (int i = start; i <= end; i++) {
            if (prime(i)) sum += i;
        }
        return sum;
    }
};