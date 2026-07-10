class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int len = arr.size();
        vector<int> ans(len, 0);
    int low = 0;
    int high = len - 1;
    
    

    if(arr[0] < 0){
        while(high >= low){
            
            if(abs(arr[low]) >= arr[high]){
                ans[high - low] = arr[low];
                low++;
            }
            else if(abs(arr[low]) < arr[high]){
                ans[high - low] = arr[high];
                high--;
            }
        }
    }
    else{
        ans = arr;
    }

    for(int i = 0 ; i < len; i++){
        ans[i] = ans[i] * ans[i];
    }
    return ans;

    }
};