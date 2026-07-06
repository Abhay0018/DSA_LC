class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int n = strs.size();
        int sum = INT_MIN;
        int x = 0;
        for(int i=0;i<n;i++){
            bool isNum = true;
            for(char ch : strs[i]){
                if(!isdigit(ch)){
                    isNum = false;
                    break;
                }
            }
            if(isNum) x = stoi(strs[i]);
            else x = strs[i].size(); 
            sum = max(sum,x);
        }
        return sum;
    }
};