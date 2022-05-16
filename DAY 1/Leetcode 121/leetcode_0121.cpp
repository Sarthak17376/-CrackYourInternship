class Solution {
public:
    int maxProfit(vector<int>& prices) {
//         int size = prices.size();
//         int maxi = INT_MIN;
//         for(int i=0; i<size-1; i++){
//             maxi = max(maxi, prices[i]);
//         }
        
//         vector<int> sorted_prices(prices);
//         sort(sorted_prices.begin(), sorted_prices.end());
        
//         int i=size-1, j=0;
//         int profit = 0;
        
//         while(prices[j]==sorted_prices[i] && i!=0){
//             j++;
//             i--;
//         }
//         if(i==0){
//             return 0;
//         }
        
//         int x = j;
//         int y = j+1;
//         int max_profit = 0;
        
//         while(y<size){
//             if(prices[y]>=prices[x]){
//                 profit=prices[y]-prices[x];
//                 max_profit = max(profit,max_profit);
//                 y++;
//             }
//             else{
//                 x=y;
//                 y++;
//             }
//         }
//         return max_profit;
        
        //KADANE APPROACH
        
        int current_profit = 0;
        int max_profit = 0;
        
        for(int i=1; i<prices.size(); i++){
            current_profit = max(0, current_profit+=(prices[i]-prices[i-1]));
            max_profit = max(max_profit, current_profit);
        }
        
        return max_profit;
    }
};