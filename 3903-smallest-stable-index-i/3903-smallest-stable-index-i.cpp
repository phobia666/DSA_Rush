class Solution {
public:
    int firstStableIndex(vector<int>& a, int k) {
        int n = a.size();
        int bg = INT_MIN;
        int sm = INT_MAX;
        int inscore;

        for(int i = 0; i < n; i++){
            bg = max(bg, a[i]);
            sm = INT_MAX;
            for(int j = i; j < n; j++){
                sm = min(sm, a[j]);
            }
            inscore = bg - sm;
            if(inscore <= k){
                return i;
            }
        }
        return -1;
    }
};