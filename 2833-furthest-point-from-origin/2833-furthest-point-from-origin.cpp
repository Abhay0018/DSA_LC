class Solution {
public:
    int furthestDistanceFromOrigin(string s) {
        int l = 0;
        int r = 0;
        int d = 0;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(s[i] == 'L')
                l++;
            else if(s[i] == 'R')
                r++;
            else if(s[i] == '_')
                d++;
        }
        return l>r ? d+l-r : d+r-l;
    }
};