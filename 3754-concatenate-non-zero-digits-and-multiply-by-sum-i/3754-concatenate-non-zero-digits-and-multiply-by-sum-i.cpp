class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        int len = s.size();
        string res = "";
        if(n == 0){
            return 0;
        }

        for(int i = 0; i < len; i++){
            if(s[i] != '0'){
                res += s[i];
            }
        }

        long long x = stoll(res);
        long long x_temp = x;
        int rem;
        int sum = 0;
        while(x_temp != 0){
            rem = x_temp % 10;
            sum += rem;
            x_temp /= 10;
        }

        return x * sum;

    }
};