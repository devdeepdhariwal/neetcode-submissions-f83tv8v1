class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int left = 0;
        int right = people.size()-1;
        sort(people.begin(),people.end());
        int boat = 0;
        while(left<=right){
            if(people[right]+people[left]<=limit){
                boat++;
                left++;
                right--;
            }
            else{
                boat++;
                right--;
            }
        }
        return boat;
    }
};