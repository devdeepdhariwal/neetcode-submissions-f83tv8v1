class Solution {
public:

    bool isPalindrome(int left,int right,const string &s){
           while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            else{
                left++;
                right--;
            }
           }
           return true;
        }

    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;
        while(i<j){
            if(s[i]!=s[j]){
                return isPalindrome(i+1,j,s) || isPalindrome(i,j-1,s);
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};