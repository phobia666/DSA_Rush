class Solution {
public:
    string longestCommonPrefix(vector<string>& a) {
        int n = a.size();
        string s = a[0];
        int cnt = 0;

        for(int i = 1; i < n; i++){
            if(a[i] == ""){
                return "";
            }

            
            int sSize = s.size();
            int aiSize = a[i].size();


            while(cnt < sSize && cnt < aiSize){
                if(s[cnt] == a[i][cnt]){
                    cnt++;
                }
                else{
                    break;
                }
            }
            s = s.substr(0, cnt);
            cnt = 0;

        }

        return s;

    }
};