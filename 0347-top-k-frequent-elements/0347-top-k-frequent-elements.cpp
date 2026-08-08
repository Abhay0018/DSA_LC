class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int, greater<int>> mp;
        priority_queue<pair<int,int>> pq;
        for(int x:nums){
            mp[x]++;
        }
        for(auto x : mp){
            pq.push({x.second, x.first});
        }
        vector<int>ans;
        int n = pq.size();
        for(int i=0;i<n;i++){
            if(ans.size() < k)
                ans.push_back(pq.top().second);
                pq.pop();
        }
        return ans;
    }
};