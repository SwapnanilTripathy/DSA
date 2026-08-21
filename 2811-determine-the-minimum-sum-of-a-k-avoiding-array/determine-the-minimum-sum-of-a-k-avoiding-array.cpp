class Solution {
public:
    int minimumSum(int n, int k) {
        set<int> st;
        int sum=0,count=0;
        for(int i=1;count<n;i++){
            if(st.find(i)==st.end()){
                sum+=i;
                count++;
                st.insert(k-i);
            }
        }
        return sum;
    }
};