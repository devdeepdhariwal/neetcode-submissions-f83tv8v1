class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        int j = 0;
        while(j<=right){
            if(nums[j]==0){
            swap(nums[j],nums[left]);
             left++;
             j++;
            }
            else if(nums[j]==1){
                j++;
            }
            else{
                swap(nums[j],nums[right]);
                right--;
            }
            
        }
    }
};