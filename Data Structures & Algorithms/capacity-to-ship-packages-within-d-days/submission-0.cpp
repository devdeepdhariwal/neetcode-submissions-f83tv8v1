class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low_bound = weights[0];
        int upper_bound = 0;
        for(int i = 0; i<weights.size(); i++){
          upper_bound += weights[i];
          low_bound = max(weights[i],low_bound);
        }

        int min_weight = 0;

        while(low_bound<=upper_bound){
            int mid = low_bound + (upper_bound-low_bound)/2;
            int day = 1;
            int pac = 0;
            for(int i = 0; i<weights.size(); i++){
                if(pac + weights[i] <= mid){
                    pac+=weights[i];
                }
                else{
                    day++;
                    pac=0;
                    pac=weights[i];
                }
            }
            if(day<=days){
                min_weight = mid;
                upper_bound = mid-1;
            }
            else{
                low_bound = mid + 1;
            }
        }

        return min_weight;

    }
};