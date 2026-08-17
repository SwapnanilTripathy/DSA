class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        set<int> st;
        vector<int> C;
        int n = A.size();
        for(int i = 0; i < n; i++) {
            st.insert(A[i]);
            int ct = 0;
            for(int j = 0; j <= i; j++) {
                if(st.count(B[j]))
                    ct++;
            }
            C.push_back(ct);
        }

        return C;
    }
};