class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MIN;
        int range = 0;
        int sum = 0;
        for(int i=0;i<n;i++){
            int maxi = INT_MIN;
            int mini = INT_MAX;
            int x = nums[i];
            while(x > 0){
                int digi = x%10;
                maxi = max(digi,maxi);
                mini = min(digi,mini);
                x /= 10;
            }
            range = maxi-mini;
            if(range > ans){
                sum = nums[i];
            }
            else if(range == ans){
                sum += nums[i];
            }
            ans = max(range,ans);
            
        }
        return sum;
    }
};