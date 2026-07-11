class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int ksum = 0;
        int ans = 0;
        int low = 0;
        int high = 0;
        int maxSum = INT_MIN;

        while(high < minutes){
            if(grumpy[high] == 1){
                ksum += customers[high];
            }
            else{
                ans += customers[high];
            }
            high++;
        }
        maxSum = max(maxSum, ksum);

        

        while(high < n){
            
            if(grumpy[high] == 1){
                ksum += customers[high];
            }
            else{
                ans += customers[high];
            }
            if(grumpy[low] == 1){
                ksum -= customers[low];
            }
            
            maxSum = max(maxSum, ksum);

            low++;
            high++;
        }

        return ans + maxSum;



    }
};