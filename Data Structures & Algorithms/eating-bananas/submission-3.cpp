class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int lb = 1;
        int hb = piles[0];
        for(int i = 1; i<piles.size(); i++){
            hb = max(hb,piles[i]);
        }

         while(lb<=hb){
            int mid = lb + (hb-lb)/2;
           long long int hours = 0;
            for(int j = 0; j<piles.size(); j++){
             hours += (piles[j] + mid - 1) / mid;
            }
            if(hours<=h){
               hb = mid-1;
            }
            else{
                lb = mid+1;
            }
         }
      return lb;
    }
};
