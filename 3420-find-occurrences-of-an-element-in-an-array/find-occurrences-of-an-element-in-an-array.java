class Solution {
    public int[] occurrencesOfElement(int[] nums, int[] queries, int x) {
        int n = nums.length;
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == x) {
                nums[j] = i;
                j++;
            }
        }
        for (int i = 0; i < queries.length; i++) {
            if (queries[i] > j) queries[i] = -1;
            else queries[i] = nums[queries[i] - 1];
        }
        return queries;
    }
}