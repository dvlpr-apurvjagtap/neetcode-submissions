class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<pair<int,int>> result;
        for (auto it : nums) {
            freq[it]++;
        }
        for(auto p:freq){
            result.push_back({p.second,p.first});
        }
        sort(result.rbegin(),result.rend());

        vector<int>res;
        for(int i=0; i<k;i++){
            res.push_back(result[i].second);
        }
        return res ;
    }
};
