class Solution {
public:
    long long gcdSum(vector<int>& a) {
        int n = a.size();
        vector<int> prefixGcd(n, 0);
        int mx = INT_MIN;

        for(int i = 0; i < n; i++){
            mx = max(mx, a[i]);
            prefixGcd[i] = gcd(a[i], mx);
        }

        sort(prefixGcd.begin(), prefixGcd.end());
        int low = 0;
        int high = n - 1;
        long long ans = 0;

        while(low < high){
            ans += gcd(prefixGcd[low], prefixGcd[high]);
            low++;
            high--;
        }

        return ans;


    }
};