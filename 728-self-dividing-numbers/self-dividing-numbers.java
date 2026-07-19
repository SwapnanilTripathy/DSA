class Solution {
    public boolean sdn(int x) {
        int n = x;
        while (x != 0) {
            int d = x % 10;
            if (d == 0 || n % d != 0) {
                return false;
            }
            x = x / 10;
        }
        return true;
    }
    public List<Integer> selfDividingNumbers(int left, int right) {
        List<Integer> ans = new ArrayList<>();
        for (int i = left; i <= right; i++) {
            if (sdn(i)) {
                ans.add(i);
            }
        }
        return ans;
    }
}