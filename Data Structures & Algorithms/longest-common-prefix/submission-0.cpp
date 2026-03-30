class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         string tmp;
         string prefix;
         prefix = strs[0];
         for(int i = 1; i<strs.size(); i++){
            tmp = strs[i];
            int j  = 0;
            while(j<prefix.length() && j<tmp.length()){
                if(prefix[j]==tmp[j]){
                  j++;
                }
                else{
                    break;
                }
            }
            prefix.erase(j);
         }
      return prefix;
    }

};