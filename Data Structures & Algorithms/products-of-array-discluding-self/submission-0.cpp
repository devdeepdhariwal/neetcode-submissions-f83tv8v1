class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int pre = 1;
         int suff = 1;
         int size = nums.size();
         vector <int> prefix;
         vector <int> suffix(size);
         vector <int> result;
         for(int i = 0; i<size; i++){
              prefix.push_back(pre);
              pre = pre*nums[i];
         }
         for(int i = size-1; i>=0; i--){
            suffix[i] = suff;
            suff = suff*nums[i]; 
         }

        for(int i = 0; i<size; i++){
            result.push_back(prefix[i]*suffix[i]);
        }

        return result;
    }
    
};
