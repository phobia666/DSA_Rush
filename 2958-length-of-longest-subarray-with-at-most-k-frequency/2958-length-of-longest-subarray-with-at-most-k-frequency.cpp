class Solution {
public:
    int maxSubarrayLength(vector<int>& a, int k) {
        int n = a.size();
        int low = 0;
        int high = 0;
        int ans = 0;
        unordered_map<int, int> mpp;

        while(high < n){
            mpp[a[high]]++;
            while(mpp[a[high]] > k){
                if(mpp.find(a[low]) == mpp.end()){
                    mpp.erase(a[low]);
                }
                else{
                    mpp[a[low]]--;
                }
                low++;
            }
            ans = max(ans, high - low + 1);
            high++;

        }

        return ans;
    }
};