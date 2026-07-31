class Solution {
public:
    int maximumProduct(vector<int>& a) {
        int n = a.size();
        int first = INT_MIN;
        int second = INT_MIN;
        int third = INT_MIN;
        int temp1;
        int temp2;

        int last = INT_MAX;
        int lastSecond = INT_MAX;
        int temp3;

        for(int i = 0; i < n; i++){
            if(a[i] > first) {
                temp1 = first;
                first = a[i];
                temp2 = second;
                second = temp1;
                third = temp2;
            }
            else if(a[i] > second){
                temp2 = second;
                second = a[i];
                third = temp2;
            }
            else if(a[i] > third){
                third = a[i];
            }

            if(a[i] < last){
                temp3 = last;
                last = a[i];
                lastSecond = temp3;
            }
            else if(a[i] < lastSecond){
                lastSecond = a[i];
            }
        }

        return max((first * second * third), (last * lastSecond * first)) ;
    }
};