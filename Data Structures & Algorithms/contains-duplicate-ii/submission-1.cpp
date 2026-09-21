class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for(int i = 0; i<nums.size(); i++){
             auto it = mp.find(nums[i]);
            if (it != mp.end()) {
             int index = it->second;
             if(abs(index-i)<=k){
                return true;
             }
                                
            }
            mp[nums[i]] = i;

        }
        return false;
    }
};