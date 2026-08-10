class Solution {
public:
    vector<int> runningSum(vector<int>& a) {
        int n = a.size();
        int sum = 0;
        vector<int> ans(n, 0);

        for(int i = 0; i < n; i++){
            sum += a[i];
            ans[i] = sum;
        }

        return ans;
    }
};