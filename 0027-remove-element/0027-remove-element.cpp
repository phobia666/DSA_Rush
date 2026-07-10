class Solution {
public:
    void Rotate(vector<int>& nums, int start, int d, int val){

    for(int i = start + d; i < nums.size(); i++){
        nums[i - d] = nums[i];
    }

    for(int i = nums.size() - d; i < nums.size(); i++){
        nums[i] = val;
    }

}


int removeElement(vector<int>& nums, int val) {

    int k = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == val){
            int j = i;
            while(j < nums.size() && nums[j] == nums[i]){
                j++;
            }
            if(j == nums.size()){
                return k;
            }
            else{
                Rotate(nums, i, j - i, val);
                i--;
            }
        }
        else{
            k++;
        }
    }
    return k;
}
};