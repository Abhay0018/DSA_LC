class Solution {
public:
    int mirrorDistance(int n) {
        int num = 0;
        int m = n;
        while(n>0){
            int digi = n%10;
            num = num*10 + digi;
            n /= 10; 
        }
        int ans = abs(m-num);
        return ans;
    }
};