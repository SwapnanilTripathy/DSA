class Solution {
    public int minimumSwaps(int[] nums) {
        int cnt = 0;
        int n = nums.length;
        int j = n - 1;
        for (int i = 0; i < n && i < j; i++) {
            while (i < j && nums[j] == 0) {
                j--;
            }
            if (i < j && nums[i] == 0 && nums[j] != 0) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                cnt++;
                j--;
            }
        }
        return cnt;
    }
}