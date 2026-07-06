class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int i=1;
        int count=1;
        int ele=nums[0];
        while(i<n){
            if(nums[i] == ele){
                count++;
            }
            else if(nums[i] != ele && count != 0){
                count -- ;
            }
            else{
                ele = nums[i];
                count ++;
            }
            i++;
        }
        return ele;
    }
};