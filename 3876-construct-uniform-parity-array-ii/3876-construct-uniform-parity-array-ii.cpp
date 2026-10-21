class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int smOd = INT_MAX;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(nums[i] % 2 != 0){
                smOd = min(smOd, nums[i]);
            }
        }

        return allOdd(nums, smOd) || allEven(nums, smOd);

    }

    bool allOdd(vector<int>& nums, int odd){
        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(nums[i] % 2 == 0){
                if(nums[i] < odd){
                    return false;
                }
            }
        }
        return true;

    }

    bool allEven(vector<int>& nums, int odd){
        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(nums[i] % 2 != 0){
                if(nums[i] <= odd){
                    return false;
                }
            }
        }
        return true;
    }
};