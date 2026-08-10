class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(n == 0) return 0;
        if(n == 1) return 1;
        int c = 1;
        int maxi = INT_MIN;
        for(int i=1;i<n;i++){
            maxi = max(c,maxi);
            if(nums[i]-nums[i-1] == 1)
                c++;
            else if(nums[i] == nums[i-1])
                continue;
            else c = 1;
        }
        maxi = max(c,maxi);
        return maxi;
    }
};