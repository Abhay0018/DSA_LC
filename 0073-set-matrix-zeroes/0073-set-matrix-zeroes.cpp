class Solution {
public:
    void setZeroes(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums[i][j] == 0){
                    for(int col=0;col<m;col++){
                        if(nums[i][col] != 0)
                            nums[i][col] = -11;
                    }
                    for(int row=0;row<n;row++){
                        if(nums[row][j] != 0)
                            nums[row][j] = -11;
                    }
                }
               
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums[i][j] == -11)
                    nums[i][j] = 0;
            }
        }
        return ;
    }
};