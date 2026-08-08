class Solution {
public:
    int subarraysDivByK(vector<int>& a, int k) {
        int n = a.size();
        unordered_map<int, int> mp;
        int sum = 0;
        int rem = 0;
        int ans = 0;
        mp[0] = 1;
        

        for(int i = 0; i < n; i++){
            sum += a[i];
            if(sum < 0 && sum % k != 0){
                rem = k - (abs(sum) % k);
            }
            else{
                rem = sum % k;
            }
            
            if(mp.find(rem) != mp.end()){
                ans += mp[rem];
            }
            mp[rem]++;
        }

        return ans;
    }
};