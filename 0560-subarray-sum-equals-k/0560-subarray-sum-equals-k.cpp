class Solution {
public:
    int subarraySum(vector<int>& a, int k) {

        int n = a.size();
        unordered_map<int, int> f;
        int ans = 0;
        int sum = 0;
        f[0] = 1;

        for(int i = 0; i < n; i++){
            sum += a[i];
            int ques = sum - k;
            int freq = f[ques];
            ans += freq;

            f[sum]++;
        }

        return ans;
    }
} ;