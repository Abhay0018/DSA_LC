class Solution {
public:
    int display(char c){
        if(c=='I') return 1;
        else if(c=='V') return 5;
        else if(c=='X') return 10;
        else if(c=='L') return 50;
        else if(c=='C') return 100;
        else if(c=='D') return 500;
        else if(c=='M') return 1000;
        return -1;
    }
    int romanToInt(string s) {
    int n = s.size();
    int ans = 0;
    int n2 = 0;
    for(int i=n-1;i>=0;i--){
        int n1 = display(s[i]);
        if(n1<n2) ans -= n1;
        else ans += n1;
        n2 = n1;
    }  
    return ans;
    }
};