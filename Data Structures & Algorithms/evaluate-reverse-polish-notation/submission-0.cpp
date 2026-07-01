class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int ans=0;
        int n=tokens.size();
        for(int i=0;i<n;i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
                st.push(stoi(tokens[i]));
            }
            else{
                if(tokens[i]=="+"){
                    int a=(int)st.top();
                    st.pop();
                    int b=(int)st.top();
                    st.pop();
                    ans=a+b;
                    st.push(ans);
                }else if(tokens[i]=="-"){
                    int a=(int)st.top();
                    st.pop();
                    int b=(int)st.top();
                    st.pop();
                    ans=b-a;
                    st.push(ans);
                }else if(tokens[i]=="*"){
                    int a=(int)st.top();
                    st.pop();
                    int b=(int)st.top();
                    st.pop();
                    ans=a*b;
                    st.push(ans);
                }else{
                    int a=(int)st.top();
                    st.pop();
                    int b=(int)st.top();
                    st.pop();
                    ans=b/a;
                    st.push(ans);
                }
            }
        }
        return st.top();
    }
};
