class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size();
        int n = needle.size();

        vector<int> lps(n, 0);

        int i = 1;
        int len = 0;

        while(i < n){
            if(needle[len] == needle[i]){
                len++;
                lps[i] = len;
                i++;
            }
            else{
                if(len > 0){
                    len = lps[len - 1];
                }
                else{
                    lps[i] = 0;
                    i++;
                }
            }
        }

        i = 0;
        int j = 0;

        while(i < m){
            
            if(haystack[i] == needle[j]){
                i++;
                j++;
            }
            else{
                if(j == 0){
                    i++;
                }
                else{
                    j = lps[j - 1];
                }
            }
            if(j == n){
                return i - j;
            }
        }
        return -1;









    }
};