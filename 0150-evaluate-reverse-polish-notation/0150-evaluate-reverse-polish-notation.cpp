class Solution {
public:
    int evalRPN(vector<string>& token) {
        stack<int>st;
        int n = token.size();
        for(int i=0;i<n;i++) {
        if(token[i] != "+" && token[i] != "-" && token[i] != "*" && token[i] != "/") {
            int num = stoi(token[i]);
            st.push(num);
        }
        else if(token[i] == "+"){
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();
            st.push(x+y);
        }
        else if(token[i] == "*"){
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();
            st.push(x*y);
        }
        else if(token[i] == "/"){
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();
            st.push(y/x);
        }
        else {
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();
            st.push(y-x);
        }
        }
        int x = st.top();
        return x;
    }
};