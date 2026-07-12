class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        set<int> se;
        map<int, int> mpp;
        int cnt = 1;

        for(int i = 0; i < n; i++){
            se.insert(arr[i]);
        }
        
        for(auto it : se){
            mpp[it] = cnt;
            cnt++;
        }

        for(int i = 0; i < n; i++){
            auto it = mpp.find(arr[i]);
            arr[i] = it->second;
        }
        return arr;
    } 
};