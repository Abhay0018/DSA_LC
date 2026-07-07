class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bp = prices[0];
        int profit = 0;
        int n = prices.size();
        for(int i=0;i<n;i++){
            if(bp < prices[i]){
                profit = max(profit,(prices[i]-bp));
            }
            else bp = prices[i];
        }
        return profit;
    }
};