class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq(26,0);
        if(s1.length()>s2.length())
        {
            return false;
        }
        for(int i = 0; i<s1.length(); i++){
             freq[s1[i]-'a']++;
        }
         int windowsize = s1.length();
         vector<int> fre1(26,0);
         int left=0;
    
         for(int i=0;i<windowsize;i++)
         {
            fre1[s2[i]-'a']++;

         }
         for(int i=windowsize;i<s2.length();i++)
         {
            if(freq==fre1)
            {
                return true;
            }
            else
            {
                fre1[s2[i]-'a']++;
                fre1[s2[left]-'a']--;
                left++;
            }

         }
         if(freq==fre1)
         {
            return true;
         }

         return false;
    }
};
