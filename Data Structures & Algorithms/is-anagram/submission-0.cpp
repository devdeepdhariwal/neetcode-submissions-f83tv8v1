class Solution {
public:
   bool isAnagram(string s, string t) {
     map <char, int> freq;

      if(s.length()!=t.length()){
        return false;
      }

     for(int i = 0; i<s.length(); i++){
        freq[s[i]]++;
     }
      
     for(int j = 0; j<t.length(); j++){
         
      
        freq[t[j]]--;
     }
     
     for(auto it : freq){
         if(it.second!=0)
         return false;
     }
     
     return true;
     
    }
};
