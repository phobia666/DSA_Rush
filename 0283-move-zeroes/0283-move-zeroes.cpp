class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int n = a.size();
        int zeroCount = 0;
        int cnt = 0;

        for(int i = 0; i < n; i++){
            if(a[i] == 0){
                zeroCount++;
            }
            else{
                swap(a[i], a[cnt]);
                cnt++;
            }
        }

        for(int i = n - zeroCount; i < n; i++){
            a[i] = 0;
        }
    }
};