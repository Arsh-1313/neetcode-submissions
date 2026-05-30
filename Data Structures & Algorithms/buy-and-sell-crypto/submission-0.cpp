class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minElement= prices[0];
        int maxProfit=0;
        int n=prices.size();
        for(int i=1;i<n;i++){
            minElement=min(minElement,prices[i]);
            int profit=prices[i]-minElement;
            maxProfit=max(maxProfit,profit);
        } 
        return maxProfit;
    }
};
