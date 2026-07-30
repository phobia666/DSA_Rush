class Solution {
public:
    int findMiddleIndex(vector<int>& a) {
         int n = a.size();

        int left = 0;
        int right = 0;
        int sum = 0;

        for(int i = 0; i < n; i++){
            sum += a[i];
        }
        
        int cnt = 0;

        while(cnt < n){
            right = sum - left - a[cnt];
            if(right == left){
                return cnt;
            }
            left += a[cnt];
            cnt++;
        }


        return -1;
    }
};