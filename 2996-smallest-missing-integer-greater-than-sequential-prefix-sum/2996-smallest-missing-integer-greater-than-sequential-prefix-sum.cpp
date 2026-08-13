class Solution {
public:
    int missingInteger(vector<int>& a) {
        int n = a.size();

        int sum = a[0];

        for(int i = 1; i < n; i++){
            if(a[i] - a[i - 1] == 1){
                sum += a[i];
            }
            else{
                break;
            }
        }


        unordered_set<int> st(a.begin(), a.end());

        while(st.find(sum) != st.end()){
            sum++;
        }
        return sum;
    }
};