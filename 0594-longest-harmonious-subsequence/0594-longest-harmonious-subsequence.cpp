class Solution {
public:
    int findLHS(vector<int>& a) {
        int n = a.size();
        int maxLength = 0;
        map<int, int> mpp;

        for(int i = 0; i < n; i++){
            mpp[a[i]]++;
        }

        for(auto it : mpp){
            if(mpp.find(it.first + 1) != mpp.end()){
                maxLength = max(maxLength, it.second + mpp[it.first + 1]);
            }
        }
        return maxLength;
    }
};