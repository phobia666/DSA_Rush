class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();

        int low = 0;
        int high = 0;
        unordered_map<int, int> mpp;
        int ans = 0;

        while(high < n){
            mpp[s[high]]++;

            while(mpp[s[high]] > 2){
                if(mpp[s[low] == 1]){
                    mpp.erase(s[low]);
                }
                else{
                    mpp[s[low]]--;
                }
                low++;
            }

            high++;
            ans = max(ans, high - low);
        }

        return ans;
    }
};