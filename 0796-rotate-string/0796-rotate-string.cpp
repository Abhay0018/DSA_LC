class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        if(s.size() != goal.size()) return false;
        for(int i=0;i<n;i++){
            if(goal == s) return true;
            char a = s[0];
            s.erase(0,1);
            s.push_back(a);
        }
        return false;
    }
};