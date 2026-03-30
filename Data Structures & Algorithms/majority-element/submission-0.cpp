class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int maj_ele;
        int size = nums.size();
        for(int i = 0; i<nums.size(); i++){
            if(count == 0){
                maj_ele = nums[i];
                count++;
            }
            
            if(count>0 && nums[i] ==maj_ele){
               count++;
            }
            else{
                count--;
            }
           
        }
      return maj_ele;
    }
};