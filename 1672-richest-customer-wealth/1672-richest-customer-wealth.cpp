class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        int m = a.size();
        int n = a[0].size();
        int sum = 0;
        int ans = 0;

        for(int i = 0; i < m; i++){
            sum = 0;
            for(int j = 0; j < n; j++){
                sum += a[i][j];
            }
            ans = max(ans, sum);
        }
        return ans;
    }
};