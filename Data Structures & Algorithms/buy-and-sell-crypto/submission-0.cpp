class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int profit = 0;

        for(int i =0; i<size-1; i++){
            int j = i+1;
            if(prices[i]>prices[i+1]){
                continue;
            }
            while(j<size && prices[i]<prices[j]){
                profit = max(profit,prices[j]-prices[i]);
                j++;
            }

        }
        return profit;
    }
};
