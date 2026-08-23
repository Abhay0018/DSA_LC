class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string ans = "";
        sort(s.begin(),s.end());
        string first = s[0];
        int n = s.size();
        string last = s[n-1];
        if(s.size() == 0) return "";
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i] == last[i])
                ans += first[i];
            else break;
        }
        return ans;
    }
};