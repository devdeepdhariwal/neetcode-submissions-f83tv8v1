class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low = 0;
        int sum = 0;
        int sublength = INT_MAX;
        
        for(int r = 0; r<nums.size(); r++){
             sum+= nums[r];
             while(sum>=target){
               sublength = min(r-low+1,sublength);
               sum -= nums[low];
               low++;
             }
        }

     return sublength == INT_MAX ? 0 : sublength;
    }
};