class Solution {
public:
    void rotateArr(vector<int>& nums, int d, int start){

        int temp[d];
        for(int i = start; i < start + d; i++){
            temp[i - start] = nums[i];
        }
        for(int i = start + d; i < nums.size(); i++){
            nums[i - d] = nums[i];
        }

        for(int i = nums.size() - d; i < nums.size(); i++){
            nums[i] = temp[i - (nums.size() - d)];
        }


    }
    
int removeDuplicates(vector<int>& nums) {
        int length = nums.size();
        int k = 0;
        int last = nums[length - 1];

        for(int i = 0 ; i < length; i++){
            if(nums[i] == last){
                k++;
                return k;
            }
            int j = i + 1;
            while(j < length && nums[j] == nums[i]){
                j++;
            }
            if(j - i - 1 != 0 && j != length){
                rotateArr(nums, j - i - 1, i + 1);
            }
            k++;

        }
        return k;
        
    }
};