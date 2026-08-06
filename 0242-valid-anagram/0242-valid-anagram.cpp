class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n>m || m>n) return false;
        vector<int>hash(26,0);
        vector<int>hashh(26,0);
        for(int i=0;i<n;i++){
            hash[s[i] - 'a']++;
        } 
        for(int i=0;i<n;i++){
            hashh[t[i] - 'a']++;
        }
        for(int i=0;i<26;i++){
            if(hash[i] != hashh[i])
                return false;
        } 
        return true;
    }
};