class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int i ;
        vector <int> ans;
        for( i = 0; i<nums.size(); i++){
            ans.push_back(nums[i]);
        }
        
        for(int j = 0; j<nums.size(); j++)
        {
            ans.push_back(ans[j]);
        }

        return ans;
    }
};