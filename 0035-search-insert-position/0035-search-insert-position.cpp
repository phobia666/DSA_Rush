class Solution {
public:
    int searchInsert(vector<int>& a, int target) {
        int len = a.size();
        int low = 0;
        int high = len - 1;

        while(low <= high){
            int mid = low + (high - low) / 2;
            
            if(target == a[mid]){
                return mid;
            }
            else if(target > a[mid]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
    }
};