class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        int index = -1;
        int n = arr.length;
        for(int i = 0; i < n - 1; i++) {
            if(arr[i] >= arr[i + 1]) {
                index = i;
                break;
            }
        }
        return index;
    }
}