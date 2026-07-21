class Solution {

    public int divisionSum(int n) {
        int count = 2;
        int sum = 1 + n;
        for (int i = 2; i * i <= n && count <= 4; i++) {
            if (n % i == 0) {
                if (i == n / i) {
                    count++;
                    sum += i;
                } else {
                    count += 2;
                    sum += i + n / i;
                }
            }
        }
        return count == 4 ? sum : 0;
    }

    public int sumFourDivisors(int[] nums) {

        int ans = 0;

        for (int x : nums) {
            ans += divisionSum(x);
        }

        return ans;
    }
}