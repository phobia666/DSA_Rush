class Solution {
public:
    int maxAbsoluteSum(vector<int>& a) {
        int n = a.size();

        int maxEnd = a[0];
        int minEnd = a[0];
        int ans = maxEnd;

        for(int i = 1; i < n; i++){
            maxEnd = max(a[i], maxEnd + a[i]);
            minEnd = min(a[i], minEnd + a[i]);
            ans = max(ans, max(abs(maxEnd), abs(minEnd)));
        }

        return abs(ans);
    }
};