class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        int left = 0;
        int right = 0;
        int windowsize = 0;
        int maxfreq = 0;
        int maxlength = 0;

        while(right<s.length()){
            freq[s[right]-'A']++;
            maxfreq = max(maxfreq,freq[s[right]-'A']);
            right++;
            windowsize = right-left;
            
            if(windowsize-maxfreq>k){
                freq[s[left]-'A']--;
                left++;
            }
           maxlength = max(maxlength,right-left);
        }
     return maxlength;
    }
};
