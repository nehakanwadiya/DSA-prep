// Problem: Buy and Sell 
// Pattern: variant of Kadane's Alogorithm(greedy+running minimum)
// Time: O(n) | Space: O(1)
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// Note: works only when the buy price is less than sell price 

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max_profit = 0;
        int bestbuy = prices[0];

        for(int i=1; i<n; i++){
            if(prices[i]>bestbuy){
                max_profit = max(max_profit, prices[i]-bestbuy);
            }
            bestbuy = min(bestbuy, prices[i]);
        }  
        return max_profit;     
    }
    
};