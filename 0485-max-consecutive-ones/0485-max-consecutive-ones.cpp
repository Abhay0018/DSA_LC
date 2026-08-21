class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int c = 0;
        int ans = 0;
        int i = 0;
        while(i<n){
            if(nums[i] == 1){
                c += 1;
                ans = max(ans,c);
            }
            else{
                c = 0;
            }
            i++;
        }
        return ans;
    }
};