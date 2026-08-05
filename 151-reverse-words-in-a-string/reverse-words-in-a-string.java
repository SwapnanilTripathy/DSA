class Solution {
    public String reverseWords(String s) {
        String[] words = s.trim().split("\\s+");
        int n = words.length;
        for (int i = 0; i < n / 2; i++) {
            String temp = words[i];
            words[i] = words[n - i - 1];
            words[n - i - 1] = temp;
        }
        return String.join(" ", words);
    }
}