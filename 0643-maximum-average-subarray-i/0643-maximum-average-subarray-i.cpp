class Solution {
public:
    double findMaxAverage(vector<int>& a, int k) {
        int n = a.size();
        double avg;
        int sum = 0;
        int maxSum = INT_MIN;
        int low = 0;
        int high = 0;

        while(high < n){
            if(high - low < k){
                sum += a[high];
                high++;
                if(high - low == k){
                    maxSum = max(maxSum, sum);
                }
            }
            else{
                sum += a[high];
                sum -= a[low];
                maxSum = max(maxSum, sum);
                low++;
                high++;
            }
        }

        avg = (double) maxSum / k;
        return avg;
    }
};