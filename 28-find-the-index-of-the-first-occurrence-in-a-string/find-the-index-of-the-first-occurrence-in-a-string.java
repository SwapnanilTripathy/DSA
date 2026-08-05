class Solution {
    public int strStr(String haystack, String needle) {

        int n = haystack.length();
        int m = needle.length();

        int j = 0;
        int index = 0;

        for (int i = 0; i < n; i++) {

            if (haystack.charAt(i) == needle.charAt(j)) {
                if (j == 0) index = i;
                j++;

                if (j == m)
                    return index;
            } else {
                if (j > 0) i = index;
                j = 0;
            }
        }
        return -1;
    }
}