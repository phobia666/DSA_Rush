class Solution {
public:
    vector<int> findMissingElements(vector<int>& a) {
        int n = a.size();
        unordered_set<int> st;
        vector<int> ans;
        int small = INT_MAX;
        int big = INT_MIN;

        for(int i = 0; i < n; i++){
            small = min(small, a[i]);
            big = max(big, a[i]);
            st.insert(a[i]);
        }

        for(int i = small + 1; i < big; i++){
            if(st.find(i) == st.end()){
                ans.push_back(i);
            }
        }

        return ans;

    }
};