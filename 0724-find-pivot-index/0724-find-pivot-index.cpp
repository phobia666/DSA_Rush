class Solution {
public:
    int pivotIndex(vector<int>& a) {
        int n = a.size();
        vector<int> prefSum(n, 0);
        vector<int> suffSum(n, 0);

        for(int i = 1; i < n; i++){
            prefSum[i] = prefSum[i - 1] + a[i - 1];
            int j = n - i - 1;
            suffSum[j] = suffSum[j + 1] + a[j + 1];
        }

        for(int i = 0; i < n; i++){
            if(prefSum[i] == suffSum[i]){
                return i;
            }
        }
        return -1;

    }
};