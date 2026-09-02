class Solution {
public:
    int maxArea(vector<int>& heights) {
        int start=0;
        int end = heights.size()-1;
        int maxWater=0;
        while(start<end){
            int water = min(heights[start],heights[end]) * (end-start);
            if(maxWater<water){
                maxWater=water;
            }
            if(heights[start]>heights[end]){
                end--;
            }else{
                start++;
            }
        }
        return maxWater;
    }
};
