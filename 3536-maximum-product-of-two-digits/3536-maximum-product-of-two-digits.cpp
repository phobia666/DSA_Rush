class Solution {
public:
    int maxProduct(int n) {
        int x = n;
        int large = 0;
        int secLarge = 0;
        int temp = 0;

        while(x != 0){
            int dig = x % 10;
            if(dig > large){
                temp = large;
                large = dig;
                secLarge = temp;
            }
            else if(dig > secLarge){
                secLarge = dig;
            }
            x /= 10;
        }
        return large * secLarge;
    }
};