class Solution {
    
    public boolean digits(int n) {
        int ct = 0;
        while(n > 0) {
            ct++;
            n = n / 10;
        }
        if(ct % 2 == 0) return true;
        else return false;
    }

    public int findNumbers(int[] nums) {
        int ct = 0;
        int n = nums.length;
        for(int i = 0; i < n; i++) {
            if(digits(nums[i])) ct++;
        }
        return ct;
    }
}