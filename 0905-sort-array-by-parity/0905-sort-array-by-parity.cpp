class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        int j = n-1;
        while(i<j){
            if(nums[i]%2 != 0){
                swap(nums[i],nums[j]);
                j--;
            }
            else{
                i++;
            }
        }
        return nums;
    }
};