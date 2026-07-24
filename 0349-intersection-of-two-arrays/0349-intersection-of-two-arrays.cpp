class Solution {
public:

int binarySearch(vector<int> a, int target, int size){
    int low = 0;
    int high = size - 1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(a[mid] == target){
            return mid;
        }
        else if(a[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;

}

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> ans;
        int index;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        if(m > n){

            index = binarySearch(nums1, nums2[0], m);
            if(index != -1){
                ans.push_back(nums1[index]);
            }

            for(int i = 1; i < n; i++){
                if(nums2[i] != nums2[i - 1]){
                    index = binarySearch(nums1, nums2[i], m);
                    if(index != -1){
                        ans.push_back(nums1[index]);
                    }
                }
                
            }
        }
        else{

            index = binarySearch(nums2, nums1[0], n);
            if(index != -1){
                ans.push_back(nums2[index]);
            }


            for(int i = 1; i < m; i++){
                if(nums1[i] != nums1[i - 1]){
                    index = binarySearch(nums2, nums1[i], n);
                    if(index != -1){
                        ans.push_back(nums2[index]);
                    }
                }
                
            }
        }

        return ans;
    }
};