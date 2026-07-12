class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp1(nums1.begin(), nums1.begin() + m);

        int a = 0;
        int b = 0;
        int cnt = 0;

        while(a < m || b < n){
            if(a == m){
                nums1[cnt] = nums2[b];
                b++;
            }
            else if(b == n){
                nums1[cnt] = temp1[a];
                a++;
            }
            else{
                if(temp1[a] > nums2[b]){
                    nums1[cnt] = nums2[b];
                    b++;
                }
                else{
                    nums1[cnt] = temp1[a];
                    a++;
                }
            }
            cnt++;
        }
    }
};