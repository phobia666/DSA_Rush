class Solution {
public:
    vector<int> decrypt(vector<int>& a, int k) {
        int n = a.size();
        vector<int> ans(n, 0);
        if(k == 0){
            return ans;
        }
        
        int sum = 0;

        if(k > 0){

            int low = 0;
            int high = 1;

            while(high <= k){
            sum += a[high];
            high++;
            }

            ans[low] = sum;
            low++;

            if(high >= n){
            high -= n;
            }

        while(low < n){
            sum -= a[low];
            sum += a[high];
            ans[low] = sum;
            low++;
            high++;
            if(high >= n){
                high -= n;
            }
            }
        }
        else{
            int low = n - 1;
            int high = n - 2;

            while(high >= (n - 1) + k){
                sum += a[high];
                high--;
            }

            ans[low] = sum;
            low--;

            if(high < 0){
                high += n;
            }

            while(low >= 0){
                sum -= a[low];
                sum += a[high];
                ans[low] = sum;

                low--;
                high--;
                if(high < 0){
                    high += n;
                }
            }
        }
        return ans;
    }
};