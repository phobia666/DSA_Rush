class Solution {
public:
    int maxProduct(int n) {
        vector<int> digs;
        int x = n;
        int cnt = 0;

        while(x != 0){
            digs.push_back(x % 10);
            x /= 10;
            cnt++;
        }

        sort(digs.begin(), digs.end());

        return(digs[cnt - 1] * digs[cnt - 2]);
    }
};