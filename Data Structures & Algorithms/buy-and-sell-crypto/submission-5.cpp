class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minbuy=prices[0];
        int maxprofit=0;
        for(int sell:prices){
            int profit=sell-minbuy;
            maxprofit=max(maxprofit,profit);
            minbuy=min(minbuy,sell);
        }
        return maxprofit;
    }
};
