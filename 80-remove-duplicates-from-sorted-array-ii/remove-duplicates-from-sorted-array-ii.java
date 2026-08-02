class Solution {
    public int removeDuplicates(int[] nums) {
        if (nums.length <= 2) return nums.length;
        int index = 1;
        int cnt = 1;
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] == nums[i - 1]) {
                cnt++;
            }
            else cnt = 1;
            if (cnt <= 2) {
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
}