class Solution {
public:
    vector<int> resultArray(vector<int>& a) {
        vector<int> a1;
        vector<int> a2;
        int n = a.size();

        a1.push_back(a[0]);
        a2.push_back(a[1]);
        int one = 0;
        int two = 0;

        for(int i = 2; i < n; i++){
            if(a1[one] > a2[two]){
                a1.push_back(a[i]);
                one++;
            }
            else{
                a2.push_back(a[i]);
                two++;
            }
        }

        vector<int> ans = a1;
        ans.insert(ans.end(), a2.begin(), a2.end());

        return ans;


    } 
};