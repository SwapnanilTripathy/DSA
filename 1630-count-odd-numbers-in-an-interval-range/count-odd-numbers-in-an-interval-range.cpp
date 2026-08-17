class Solution {
public:
    int odd(int n){
        if(n%2==1) return true;
        else return false;
    }
    int countOdds(int low, int high) {
        int ct=0;
        for(int i=low;i<=high;i++){
            if(odd(i)) ct++;
        }
    return ct;   
    }
};