class Solution {
public:
    int maxProfit(vector<int>& a) {
        int n = a.size();
        int minPrice = a[0];
        int maxProfit = 0;

        for(int i = 1; i < n; i++){
            minPrice = min(minPrice, a[i - 1]);
            maxProfit = max(maxProfit, a[i] - minPrice);
        }
        return maxProfit;
    }
};