class Solution {
public:
    int findMaxLength(vector<int>& a) {
        int n = a.size();
        unordered_map<int, int> f;
        int ans = 0;
        int cntOne = 0;
        int cntZero = 0;
        int diff;

        for(int i = 0; i < n; i++){
            if(a[i] == 1) cntOne++;
            else cntZero++;

            diff = cntOne - cntZero;

            if(diff == 0){
                ans = max(ans, i + 1);
            }

            if(f.find(diff) != f.end()){
                ans = max(ans, i - f[diff]);
            }
            else{
                f[diff] = i;
            }
            
        }
        return ans;

    }
};