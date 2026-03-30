class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int i = 0;
        while(i<prices.size()-1){
            if(prices[i]>prices[i+1]){
                i++;
            }
        else {
            maxprofit+=prices[i+1]-prices[i];
            i++;
        }
        }
    return maxprofit;
    }
};