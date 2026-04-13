// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int n=prices.size();
//         int profit=0;
//         int buy_day=INT_MAX;
//         int buy=INT_MAX;
//         for(int i=0;i<n;i++){
//             buy=min(buy,prices[i]);
//             if(buy==prices[i]) buy_day=i;
//         }   
        
//         int sell=INT_MIN;
//         for(int i=buy_day;i<n;i++){
//             sell=max(sell,prices[i]);
//         }
//         profit=sell-buy;
//         return profit;
//     }
// };
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int profit = 0;

        for (int price : prices) {
            minPrice = min(minPrice, price);
            profit = max(profit, price - minPrice);
        }

        return profit;
    }
};