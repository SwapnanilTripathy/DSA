class Solution {
    public int minimumPrefixLength(int[] nums) {
        int index = 0;
        int n = nums.length;
        for(int i = 0; i < n - 1; i++) {
            if(nums[i] >= nums[i + 1]) {
                index = i+1;
            }
        }
        return index;
    }
}