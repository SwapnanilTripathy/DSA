class Solution {
    public int arrangeCoins(int n) {
        int i=1,ct=-1;
        while(n>=0){
            n-=i;
            i++;
            ct++;
        }
    return ct;    
    }
}