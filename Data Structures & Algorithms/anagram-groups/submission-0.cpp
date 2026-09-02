class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> freq;
        vector<vector<string>> ans;
        for(int i=0;i<strs.size();i++){
            string rev = strs[i];
            sort(rev.begin(), rev.end());
            freq[rev].push_back(strs[i]);
        }
        for(auto it: freq){
            ans.push_back(it.second);
        }
        return ans;
    }
};
