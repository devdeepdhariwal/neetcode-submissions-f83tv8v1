class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int high = size-1;
        int low = 0;
        while(low<=high){
          while(low<=high && nums[high] == val){
             high--;
          }
          
            if(low<=high && nums[low] == val){
                swap(nums[low],nums[high]);
                high--;
            }
            else {
                low++;
            }
          }
        
      return high+1;  
    }
};