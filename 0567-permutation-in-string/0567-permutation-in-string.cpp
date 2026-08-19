class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>hash1(26,0);
        vector<int>hash2(26,0);
        int n = s2.size();
        int m = s1.size();
        int i=0;
        int j=m;
        if(n<m) return false;
        while(i<j){
            hash1[s1[i] - 'a']++;
            hash2[s2[i] - 'a']++;
            i++;
        }
        if(hash1 == hash2)
            return true;
        while(j<n){
            hash2[s2[j]-'a']++;
            hash2[s2[j-m]-'a']--;
            
            if(hash1 == hash2) return true;
            
            j++;
        }
        return false;
    }
};