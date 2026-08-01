class Solution {
    public boolean isHappy(int n) {
        int sum = n;
        while (sum != 1 && sum != 4) {  
            int temp = 0;
            while (sum > 0) {
                int d = sum % 10;   
                temp += d * d;      
                sum /= 10;          
            }
            sum = temp; 
        }
        return sum == 1;
    }
}