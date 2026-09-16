class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;
        int area = 0;
        int newarea = 0;
        area = min(heights[left],heights[right])*(right-left);
        while(left<right){
           if(heights[right]<=heights[left]){
            right--;
           }
           else{
            left++;
           }
        newarea = min(heights[left],heights[right])*(right-left);
        area = max(area,newarea);
        }
    return area;
    }
};
