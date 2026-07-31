class Solution {
public:
    int maximumProduct(vector<int>& a) {
        int n = a.size();

        sort(a.begin(), a.end());

        int prod = 1;
        if(n == 3){
            return a[0] * a[1] * a[2];
        }
        prod = a[0] * a[1] * a[n - 1];
        prod = max(prod, a[n - 1] * a[n - 2] * a[n - 3]);

        return prod;
    }
};