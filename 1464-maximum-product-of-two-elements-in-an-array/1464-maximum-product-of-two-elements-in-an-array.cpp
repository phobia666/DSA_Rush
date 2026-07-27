class Solution {
public:
    int maxProduct(vector<int>& a) {
        int n = a.size();
        int large = INT_MIN;
        int secLarge = INT_MIN;
        int temp;

        for(int i = 0; i < n; i++){
            if(a[i] > large){
                temp = large;
                large = a[i];
                secLarge = temp;
            }
            else if(a[i] > secLarge){
                secLarge = a[i];
            }
        }

        return (large - 1) * (secLarge - 1);
    }
};