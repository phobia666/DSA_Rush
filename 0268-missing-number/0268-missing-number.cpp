class Solution {
public:
    int missingNumber(vector<int>& a) {
        int n = a.size();
        int ans = 0;

        for(int i = 0; i <= n; i++){
            ans = ans ^ i;
        }

        for(int i = 0; i < n; i++){
            ans = ans ^ a[i];
        }
        return ans;
    }
};