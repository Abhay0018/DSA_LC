class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int ans =  0;
        int c = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                c++;
                ans = max(c,ans);
            }
            else if(s[i] == ')')
                c--;
        }
        return ans;
    }
};