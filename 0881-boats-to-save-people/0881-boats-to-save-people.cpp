class Solution {
public:
    int numRescueBoats(vector<int>& a, int limit) {
        int n = a.size();
        int boats = 0;

        sort(a.begin(), a.end());

        int low = 0;
        int high = n - 1;

        while(low <= high){
            if(a[low] + a[high] > limit){
                if(a[low] > a[high]) low++;
                else high--;
            }
            else{
                low++;
                high--;
            }
            boats++;
        }
        return boats;
    }
};