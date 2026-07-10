class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), [](auto &a, auto& b){
            if(a[0] == b[0]){
                return a[1] >= b[1];
            }
            return a[0] < b[0];
        });

        int maxEnd = intervals[0][1];
        int cnt = 0;

        for(int i = 1; i < n; i++){
            if(maxEnd >= intervals[i][1]){
                cnt++;
            }
            else{
                maxEnd = intervals[i][1];
            }
        }

        return n - cnt;
    }
};