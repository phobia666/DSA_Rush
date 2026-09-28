class Solution {
public:
    int minimumDeletions(vector<int>& a) {
        int n = a.size();
        int indmin = 0;
        int indmax = 0;
        int small = a[0];
        int big = a[0];

        for(int i = 1; i < n; i++){
            if(a[i] > big){
                big = a[i];
                indmax = i;
            }

            if(a[i] < small){
                small = a[i];
                indmin = i;
            }
        }

        int leftmin = indmin + 1;
        int rightmin = n - indmin;
        int leftmax = indmax + 1;
        int rightmax = n - indmax;
        

        if(leftmin < rightmin && leftmax > rightmax){
            return min(leftmin + rightmax, min(rightmin, leftmax));
        }
        if(leftmin > rightmin && leftmax < rightmax){
            return min(rightmin + leftmax, min(leftmin, rightmax));
        }

        if(leftmin <= rightmin && leftmax <= rightmax){
            return max(leftmax, leftmin);
        }

        if(leftmin >= rightmin && leftmax >= rightmax){
            return max(rightmax, rightmin);
        }
        return 1;

    }
};