class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int i = 0;
        int j = 0;

        while(i < s.size() && j < t.size()){
                if(s[i] == t[j]){
                    j++;
                    i++;
                }
                else if (((s[i] - 'a' + 1) % 26 + 'a') == t[j]) {
                    i++;
                    j++;
                }
                else if(s[i] != t[j] )
                    i++;
            }
        return j == t.size();
    }
};