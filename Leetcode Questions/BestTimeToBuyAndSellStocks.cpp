class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum_price = INT_MAX;
        int maximum_profit = INT_MIN;
        for(int i=1;i<prices.size();i++){
            minimum_price = min(minimum_price, prices[i-1]);
            maximum_profit = max(maximum_profit, prices[i]-minimum_price);
        }
        if(maximum_profit<0)
            return 0;
        else
            return maximum_profit;
    }
};