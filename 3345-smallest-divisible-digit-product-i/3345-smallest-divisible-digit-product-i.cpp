class Solution {
public:
    int smallestNumber(int n, int t) {
        int x = n;
        int num = x;
        bool cond = true;
        int prod = 1;

        while(cond){
            while(x != 0){
                int rem = x % 10;
                prod *= rem;
                x /= 10;
            }
            if(prod % t == 0){
                return num;
            }
            num++;
            x = num;
            prod = 1;
        }

        return -1;
    }
};