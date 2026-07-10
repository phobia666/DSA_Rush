class Solution {
public:
    int minSubArrayLen(int target, vector<int>& a) {
    int n = a.size();
    int high = 0;
    int low = 0;
    int sum = 0;
    int k = 0;
    int res = INT_MAX;
    bool cond = false;

    while(high < n){
        sum += a[high];

        while(sum >= target){
            cond = true;
            k = high - low + 1;
            res = min(res, k);
            sum -= a[low];
            low++;
        }
        
        high++;

    }
    if(!cond){
        return 0;
    }
    return res;
    }
};