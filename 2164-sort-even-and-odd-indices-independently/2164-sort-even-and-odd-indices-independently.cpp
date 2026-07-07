class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        vector<int>odd;
        vector<int>even;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(i % 2 == 0)
                even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        reverse(odd.begin(),odd.end());
        int e = 0;
        int o = 0;
        for(int i=0;i<n;i++){
            if(i % 2 == 0)
                ans[i] = even[e++];
            else
                ans[i] = odd[o++];
        }
        return ans;
    }
};