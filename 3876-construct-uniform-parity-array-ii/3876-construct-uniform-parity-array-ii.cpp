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

        bool Ev = true;
        bool Od = true;

        for(int i = 0; i < n; i++){
            if(nums[i] % 2 == 0){
                if(nums[i] < smOd){
                    Od = false;
                    break;
                }
            }
        }

        for(int i = 0; i < n; i++){
            if(nums[i] % 2 != 0){
                if(nums[i] <= smOd){
                    Ev = false;
                    break;
                }
            }
        }        
        return Ev || Od;
    }
};