class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> freq;
        for(int i=0; i<nums.size();i++ ){
            auto sum = freq.find(target - nums[i]);
            if(sum != freq.end()){
                return {sum->second, i};
            }
            freq[nums[i]] = i;
        }
        return {0,0};
    }
};
