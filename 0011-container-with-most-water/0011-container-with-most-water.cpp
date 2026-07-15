class Solution {
public:
    int maxArea(vector<int>& a) {
        int n = a.size();
        int maxArea = INT_MIN;
        int low = 0;
        int high = n - 1;


        while(low < high){

            int length = high - low;
            int height = min(a[low], a[high]);
            maxArea = max(maxArea, length * height);

            if(a[low] < a[high]){
                low++;
            }
            else{
                high--;
            }
        }
        
        return maxArea;
    }
};