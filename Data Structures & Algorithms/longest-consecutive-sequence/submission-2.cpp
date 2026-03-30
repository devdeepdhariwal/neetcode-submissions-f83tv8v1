class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    set<int> s1(nums.begin(),nums.end());
    int seq = 1;
    int maxCount = 1;
    if (s1.empty()) return 0;
    int prev = *s1.begin();
    
    for(auto it = next(s1.begin()); it != s1.end(); ++it) {
        if(*it == prev + 1) {
            seq++;                     
        } else {
            maxCount = max(maxCount, seq);
            seq = 1;                   
        }
        prev = *it;
    }
    
    maxCount = max(maxCount, seq);
    return maxCount;
}
};
