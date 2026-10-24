class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string s="",output="";
        int n=path.size();

        for(int i=0;i<=n;i++){
            if(i==n || path[i]=='/'){
                if(s==".."){
                    if(!st.empty()) st.pop();
                }
                else if(s!="" && s!=".") st.push(s);
                s="";
            }
            else s+=path[i];
        }

        while(!st.empty()){
            output="/"+st.top()+output;
            st.pop();
        }

        if(output=="") return "/";
        return output;
    }
};