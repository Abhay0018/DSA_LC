class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int maxInd = 0;
        int m = INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i] > m){
                m = nums[i];
                maxInd = i;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i] != m && nums[i]*2 > m)
                return -1;
        }
        return maxInd;
    }
};