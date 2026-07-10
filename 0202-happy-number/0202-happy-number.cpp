class Solution {
public:

int happ(int num){
    int sum = 0;
    int rem;
    while(num != 0){
        rem = num % 10;
        sum += (rem * rem);
        num /= 10;
    }
    return sum;
}

    bool isHappy(int x) {
        int slow = x;
        int fast = x;

        while(fast != 1){
            slow = happ(slow);
            fast = happ(fast);
            fast = happ(fast);

            if(slow == fast && slow != 1){
                return false;
            }
        }
        return true;
    }
};