class Solution {
public:
    int totalMoney(int n){
        int i = 7;
        int j = 0;
        int sum = 0;
        while(n >= 7){
            int add = i * (i + 1) / 2;
            int remove = j * (j + 1) / 2;
            sum += add - remove;
            i++;
            j++;
            n -= 7;
        }
        for(int k = 1; k <= n; k++){
            sum += j + k;
        }
        return sum;
    }
};