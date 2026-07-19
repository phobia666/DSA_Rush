class Solution {
public:
    vector<string> summaryRanges(vector<int>& a) {
        int len = a.size();
        vector<string> ans;
        int low = 0;
        int high = 0;
        if(len == 0){
            return ans;
        }
        int elem = a[0];
        string entry;

        while(high < len){
            if(a[high] != elem){
                if(high - low <= 1){
                    entry = to_string(a[low]);
                    ans.push_back(entry);
                }
                else{
                    entry = to_string(a[low]) + "->" + to_string(a[high - 1]);
                    ans.push_back(entry);
                }
                low = high;
                elem = a[low];
            }
            if(low == len - 1){
                entry = to_string(a[low]);
                ans.push_back(entry);
                break;
            }
            else if(high == len - 1){
                entry = to_string(a[low]) + "->" + to_string(a[high]);
                ans.push_back(entry);
                break;
            }
            elem++;
            high++;
        }
        return ans;
    }
};