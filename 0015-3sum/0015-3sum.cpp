class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
    vector<vector<int>> ans;
    int len = a.size();
    sort(a.begin(), a.end());
    int elem = a[0];

    for(int i = 0; i < len - 2; i++){

        int left = i + 1;
        int right = len - 1;
        if(i > 0) {
            if(elem == a[i]){
                
                continue;
            }
            elem = a[i];
        }

        
        while(left < right){
            if(a[left] + a[right] == -a[i]){
                ans.push_back({a[i], a[left], a[right]});
                left++;
                right--;
                
                while(left < len - 1 &&(a[left] == a[left - 1])) left++;
                while(right > 0 &&(a[right] == a[right + 1])) right--;
            }
            else if(a[left] + a[right] > -a[i]){
                right--;
            }
            else{
                left++;
            }
        }
    }

    return ans;    
    }
};