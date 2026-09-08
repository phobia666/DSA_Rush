class Solution {
public:
    int missingMultiple(vector<int>& a, int k) {
        int m = k;
        int n = a.size();

        sort(a.begin(), a.end());

        for(int i = 0; i < n; i++){
            if(a[i] == m){
                m += k;
            }
        }
        return m;
    }
};