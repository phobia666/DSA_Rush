class Solution {
public:
    int threeSumClosest(vector<int>& a, int target) {
    int closeSum = 0;
    int diff = INT_MAX;
    int len = a.size();
    int sum = 0;
    sort(a.begin(), a.end());
    int elem = a[0];

    for(int i = 0; i < len - 2; i++){
        if(i > 0){
            if(elem == a[i]) continue;
            elem = a[i];
        }
        int right = len - 1;
        int left = i + 1;

        while(left < right){
            sum = a[left] + a[right];
            if(sum == target - a[i]){
                return target;
            }
            else if(sum > target - a[i]){
                right--;
            }
            else{
                left++;
            }
            if(abs(sum + a[i] - target) < diff){
                diff = abs(sum + a[i] - target);
                closeSum = sum + a[i];
            }
        }
    }
    return closeSum;
    }
};