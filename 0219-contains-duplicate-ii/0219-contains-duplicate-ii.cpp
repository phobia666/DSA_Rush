class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& a, int k) {
        int n = a.size();
        unordered_set<int> unset;
        int low = 0;
        int high = 0;
        if(k == 0) return false;

        unset.insert(a[high]);
        high++;

        while(high < n){
            if(high - low > k){
                unset.erase(a[low]);
                low++;
            }
            
            if(unset.find(a[high]) != unset.end()) return true;

            unset.insert(a[high]);
            high++;
        }

        return false;
    }
};