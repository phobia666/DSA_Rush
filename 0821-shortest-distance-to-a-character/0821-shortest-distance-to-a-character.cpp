class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> ans (n, n);

        int low = 0;
        int high = 0;
        bool cond = false;

        while(high < n){

            if(s[high] == c){
                ans[high] = 0;
                cond = true;
                while(low < high){
                    ans[low] = min(ans[low], abs(high - low));
                    low++;
                }
            }
            else{
                if(cond){
                    ans[high] = min(ans[high], abs(high - low));
                }
            }
            high++;

        }
        return ans;

    }
};