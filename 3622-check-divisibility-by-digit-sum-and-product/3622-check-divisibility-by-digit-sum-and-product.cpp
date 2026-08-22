class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int prod = 1;
        int x = n;

        while(x != 0){
            int rem = x % 10;
            sum += rem;
            prod *= rem;
            x /= 10;
        }

        if(n % (sum + prod) == 0){
            return true;
        }
        return false;
    }
};