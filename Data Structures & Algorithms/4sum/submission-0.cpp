class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        int n = nums.size();
        for(int i = 0; i<n; i++)
        {
           if(i>0 && nums[i]==nums[i-1]){
             continue;
           }
           for(int j = n-1; j>i; j--){
            int right = j-1;
            int left = i+1;
             if(j<n-1 && nums[j]==nums[j+1]){
             continue;
           }
             while(left<right){
                long long sum = 1LL * nums[i] + nums[left] + nums[right] + nums[j];
            if(sum==target){
               result.push_back({nums[i],nums[left],nums[right],nums[j]});
               left++;
               right--;
               while(left<right && nums[left]==nums[left-1]){
                left++;
               }
               while(right>left && nums[right]==nums[right+1]){
                right--;
               }
           }
         else if(sum<target){
                left++;
            }

        else {
             right--;
        }

           }

           }
           

        }
        return result;
    }
};