class Solution {
public:
    void sortColors(vector<int>& a) {
        int n = a.size();
        int one = 0;
        int low = 0;
        int high = n - 1;

        while(low <= high){
            if(a[low] == 0){
                swap(a[one], a[low]);
                one++;
                low++;
            }
            else if(a[low] == 1){
                low++;
            }
            else{
                swap(a[low], a[high]);
                high--;
            }
        }
    }
};