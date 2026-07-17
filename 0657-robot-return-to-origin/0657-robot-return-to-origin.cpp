class Solution {
public:
    bool judgeCircle(string s) {
        int n = s.size();
        int x = 0;
        int y = 0;
        int z = 0;
        int a = 0;
        for(int i=0;i<n;i++){
            if(s[i] == 'U')
                x++;
            else if(s[i] == 'D')
                y++;
            else if(s[i] == 'R')
                z++;
            else if(s[i] == 'L')
                a++;
        }
        if(x == y && z == a)
            return true;
        return false;
    }
};