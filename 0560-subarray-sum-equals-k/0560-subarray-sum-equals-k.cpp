class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>ans(n);
        int count = 0;
        ans[0] = nums[0];
        if(ans[0] == k) count++;
        for(int i=1;i<n;i++){
            ans[i] = ans[i-1]+nums[i];
            if(ans[i] == k) count ++;
            for (int j = 0; j < i; j++) {
                if(ans[i] - ans[j] == k)
                    count++;
            }
        }
        return count;
    }
};