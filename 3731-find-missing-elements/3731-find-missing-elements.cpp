class Solution {
public:
    vector<int> findMissingElements(vector<int>& a) {
        int n = a.size();
        vector<bool> check(101, false);
        vector<int> ans;
        int small = 101;
        int big = 0;

        for(int i = 0; i < n; i++){
            small = min(small, a[i]);
            big = max(big, a[i]);
            check[a[i]] = true;
        }

        for(int i = small + 1; i < big; i++){
            if(!check[i]){
                ans.push_back(i);
            }
        }

        return ans;

    }
};