class Solution {
public:
    vector<int> findMissingElements(vector<int>& a) {
        int n = a.size();
        vector<int> ans;

        sort(a.begin(), a.end());

        for(int i = 1; i < n; i++){
            int cnt = 1;
            int diff = a[i] - a[i - 1];
            int elem = a[i - 1] + 1;

            while(cnt < diff){
                ans.push_back(elem);
                elem++;
                cnt++;
            }
        }
        return ans;
    }
};