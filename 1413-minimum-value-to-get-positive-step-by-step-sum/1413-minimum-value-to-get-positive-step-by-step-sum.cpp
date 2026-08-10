class Solution {
public:
    int minStartValue(vector<int>& a) {
        int n = a.size();
        int sum = 0;
        int ans = INT_MAX;

        for(int i = 0; i < n; i++){
            sum += a[i];
            ans = min(ans, sum);
        }

        if(ans <= 0){
            return abs(ans) + 1;
        }
        return 1;
    }
};