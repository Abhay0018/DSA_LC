class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        int sum = 0;
        int maxi = INT_MIN;
        while(i<n){
            if(sum<0)
                sum = 0;
            sum += nums[i];
            maxi = max(sum,maxi);
            i++;
        }
        return maxi;
    }
};