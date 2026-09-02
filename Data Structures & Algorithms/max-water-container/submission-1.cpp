class Solution {
public:
    int maxArea(vector<int>& heights) {
        int start=0;
        int end = heights.size()-1;
        int maxWater=0;
        while(start<end){
           int water=0;
           if(heights[start]<heights[end]){
            water = heights[start] *(end-start);
            start++;
           }else{
            water = heights[end] *(end-start);
            end--;
           }
           if(water>maxWater){
            maxWater=water;
           }
        }
        return maxWater;
    }
};
