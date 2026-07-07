class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(k == __builtin_popcount(i)){
                ans += nums[i];
            }
        }
        return ans;
    }
};