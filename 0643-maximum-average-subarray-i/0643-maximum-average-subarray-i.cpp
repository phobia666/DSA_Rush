class Solution {
public:
    double findMaxAverage(vector<int>& a, int k) {
        int n = a.size();
        double avg;
        int sum = 0;
        int maxSum = INT_MIN;
        int low = 0;
        int high = k;

        for(int i = 0; i < k; i++){
            sum += a[i];
        }

        maxSum = max(maxSum, sum);



        while(high < n){
        
            sum += a[high];
            sum -= a[low];
            
            maxSum = max(maxSum, sum);
            low++;
            high++;
        
        }

        avg = (double) maxSum / k;
        return avg;
    }
};