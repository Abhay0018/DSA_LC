class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        while(j<n){
            if(nums[j] == 0)
                break;
            j++;
        }
        if(j == n) return;
        int i = j+1;
        while(i<n){
            if(nums[i] != 0 && nums[j] == 0){
                swap(nums[i],nums[j]);
                j++;
            }
            i++;
        }
        return ;
    }
};