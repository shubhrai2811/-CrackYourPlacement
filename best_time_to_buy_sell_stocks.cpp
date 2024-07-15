class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        int maxpro=0;
        int minprice=INT_MAX;
        int n=prices.size();
        for(int i=0;i<n;i++){
            if(prices[i]<minprice){
                minprice=prices[i];
            }
            maxpro=max(maxpro,(prices[i]-minprice));
        }
        return maxpro;
    }
};