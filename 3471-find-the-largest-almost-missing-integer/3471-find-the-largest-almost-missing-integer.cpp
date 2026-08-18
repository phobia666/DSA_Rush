class Solution {
public:
    int largestInteger(vector<int>& a, int k) {
        int n = a.size();

        map<int, int> mpp;
        int low = 0;
        int high = 0;
        int ans = INT_MIN;
        bool cond = false;


        while(high < n){
            if(n - k >= high){
                if(high - low < k){
                    mpp[a[high]] += high + 1;
                }
                else{
                    mpp[a[high]] += k;
                    low++;
                }
            }
            else{
                if(n == k){
                    if(mpp.find(a[high]) == mpp.end()){
                        mpp[a[high]]++;
                    }
                }
                else{
                    if(high - low < k){
                    mpp[a[high]] += n - k + 1;
                }
                else{
                    mpp[a[high]] += n - high;
                    low++;
                }
                }
                
            }
            high++;
        }

        for(int i = 0; i < n; i++){
            if(mpp[a[i]] == 1){
                ans = max(ans, a[i]);
                cond = true;
            }
        }
     
        if(cond){
            return ans;
        }
        return -1;
        
    }



};