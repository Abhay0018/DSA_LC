class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        vector<int>hash(26,0);
        int ans = -1;
        for(int i=0;i<n;i++){
            bool flag = false;
            for(int j=0;j<n;j++){
                if(i!=j && s[i] == s[j]){
                    flag = true;
                    break;
                }
            }
            if(!flag) return i;
        }
        return ans;
    }
};