class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int sublength = 0;
        int maxlength = 0;
        int left = 0;
        unordered_set<char> check;
        for(int i =0; i<s.length(); i++){
    
            while(check.count(s[i])){
                check.erase(s[left]);
                left++;
                sublength--;
                
            }
    
                check.insert(s[i]);
                sublength++;
                maxlength = max(maxlength,sublength);
            
        }
        return maxlength;
    }
};
