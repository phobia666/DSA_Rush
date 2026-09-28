class Solution {
public:
    int smallestIndex(vector<int>& a) {
        int n = a.size();
        int sum = 0;
        int ans = n - 1;
        bool cond = false;

        for(int i = 0; i < n; i++){
            int x = a[i];
            sum = 0;
            while(x != 0){
                int rem = x % 10;
                sum += rem;
                x /= 10;
            }
            if(sum == i){
                cond = true;
                ans = min(ans, sum);
            }
        }
        if(cond){
            return ans;
        }
        return -1;
        
    }
};