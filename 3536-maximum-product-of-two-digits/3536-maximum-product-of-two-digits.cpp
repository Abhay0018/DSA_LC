class Solution {
public:
    int maxProduct(int n) {
        int sec = 0;
        int maxi = INT_MIN;
        string s = to_string(n);
        int m = s.size();
        for(int i=0;i<m;i++){
            if(s[i] - '0' > maxi){
                sec = maxi;
                maxi = (s[i] - '0');
            }
            else if((s[i] - '0') > sec){
                sec = (s[i] - '0');
            }
        }
        if(sec == INT_MIN) return -1;
        int ans = maxi*sec;
        return ans;
    }
};