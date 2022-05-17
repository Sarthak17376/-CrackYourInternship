class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int maxi = INT_MIN;
        for(int i=0; i<size-1; i++){
            maxi = max(maxi, prices[i]);
        }
        
        vector<int> sorted_prices(prices);
        sort(sorted_prices.begin(), sorted_prices.end());
        
        int i=size-1, j=0;
        int profit = 0;
        
        while(prices[j]==sorted_prices[i] && i!=0){
            j++;
            i--;
        }
        if(i==0){
            return 0;
        }
        
        int k = j+1;
        
        while(k<size){
            if(prices[k]>prices[j]){
                profit = profit + (prices[k] - prices[j]);
            }
            j++;
            k++;
        }
        return profit;
    }
};