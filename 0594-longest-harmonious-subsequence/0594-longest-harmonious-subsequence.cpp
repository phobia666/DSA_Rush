class Solution {
public:
    int findLHS(vector<int>& a) {
        int n = a.size();
        sort(a.begin(), a.end());

        int length = 0;
        int ans = 0;
        int low = 0;
        int high = 0;

        while(high < n){
            if(a[high] - a[low] == 0){
                length++;
                high++;
            }
            else if(a[high] - a[low] == 1){
                length++;
                ans = max(ans, length);
                high++;
            }
            else{
                length--;
                low++;
            }
        }
        return ans;
    }
};