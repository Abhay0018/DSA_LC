class Solution {
public:
    vector<int>gen(int a){
        long long ans = 1;
        vector<int>ak;
        ak.push_back(ans);
        for(int j=1;j<a;j++){
            ans = ans*(a-j);
            ans = ans/j;
            ak.push_back(ans);
        }
        return ak;
    }
    vector<vector<int>> generate(int nums) {
        vector<vector<int>>ans;
        for(int i=1;i<=nums;i++){
            ans.push_back(gen(i));
        }
        return ans;
    }
};