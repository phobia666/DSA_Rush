class Solution {
public:
    int maxSubarraySumCircular(vector<int>& a) {
        int n = a.size();
        int maxEnd = a[0];
        int minEnd = a[0];
        int minAns = minEnd;
        int maxAns = maxEnd;
        int sum = a[0];

        for(int i = 1; i < n; i++){
            maxEnd = max(a[i], maxEnd + a[i]);
            minEnd = min(a[i], minEnd + a[i]);
            minAns = min(minAns, minEnd);
            maxAns = max(maxAns, maxEnd);
            sum += a[i];
        }
        if(sum == minAns){
            return maxAns;
        }
        return max(maxAns, sum - minAns);
    }
};