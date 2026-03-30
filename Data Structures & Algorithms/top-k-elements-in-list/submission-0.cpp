class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         map<int,int> freq;
         int n = nums.size();
         vector<vector<int>> v1(n+1);
         vector<int> result;
        
         for(int i = 0; i<nums.size(); i++){
            freq[nums[i]]++;
         }
         for (auto & x: freq){
            v1[x.second].push_back(x.first);
 }      
         for(int i = n; i>=0 && result.size()<k; i--){
            for(auto x : v1[i]){
                result.push_back(x);
                if(result.size()==k)
                break;
            }
         }
     return result;
    }
};
