class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        int maxr = n-1;
        int maxc = m-1;
        int minr = 0;
        int minc = 0;
        int tle = n*m;
        int c = 0;
        vector<int>ans;
        while(minr <= maxr && minc <= maxc){
            for(int j=minc;j<=maxc && c<tle;j++){
                ans.push_back(nums[minr][j]);
                c++;
            }
            minr++;
            for(int i=minr;i<=maxr && c<tle;i++){
                ans.push_back(nums[i][maxc]);
                c++;
            }
            maxc--;
            for(int j=maxc;j>=minc && c<tle;j--){
                ans.push_back(nums[maxr][j]);
                c++;
            }
            maxr--;
            for(int i=maxr;i>=minr && c<tle;i--){
                ans.push_back(nums[i][minc]);
                c++;
            }
            minc++;
        }
        return ans;
    }
};