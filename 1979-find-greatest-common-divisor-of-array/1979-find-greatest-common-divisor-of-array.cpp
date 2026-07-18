class Solution {
public:
    int findGCD(vector<int>& a) {
        int len = a.size();
        int big = INT_MIN;
        int small = INT_MAX;

        for(int i = 0; i < len; i++){
            big = max(big, a[i]);
            small = min(small, a[i]);
        }

        return gcd(big, small);
    }
};