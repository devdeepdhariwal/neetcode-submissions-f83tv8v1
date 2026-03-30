class Solution {
public:

    string encode(vector<string>& strs) {
           string s;
           for(int i = 0; i < strs.size(); i++){
            int length = strs[i].length();
            s += to_string(length);
            s+="#";
            s += strs[i];
           }
        return s;
    }

    vector<string> decode(string s) {
         vector <string> v;
         string a;
         int i = 0;
         while(i<s.length()){
            string slength;
            while(s[i]!='#'){
                slength += s[i];
                i++;
            }
          i++;
        int length =  stoi(slength);
        for(int j = 0; j<length; j++){
           a += s[i];
           i++;
        }
    
          v.push_back(a);
          a.clear();
         }
         return v;
    }
       
};
