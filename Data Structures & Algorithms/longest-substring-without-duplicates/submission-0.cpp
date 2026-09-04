class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>seen;
        int count=0;
        int maxi=0;
        int j=0;

        for(int i =0;i<s.size();i++){
            if(seen.count(s[i])){
                while(seen.count(s[i])){
                    seen.erase(s[j]);
                    j++;
                }
            }
            seen.insert(s[i]);
            maxi=max(maxi,i-j+1);
        }
        return maxi;
    }
};
