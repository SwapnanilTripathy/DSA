class Solution {
    public int findGCD(int[] nums) {
        int min = nums[0];
        int max = nums[0];
        for (int j = 1; j < nums.length; j++) {
            if (nums[j] < min) min = nums[j];
            if (nums[j] > max) max = nums[j];
        }
        int i = 1;
        int gcd = 1;
        while (i <= min) {
            if (min % i == 0 && max % i == 0) {
                gcd = i;
            }
            i++;
        }
        return gcd;
    }
}