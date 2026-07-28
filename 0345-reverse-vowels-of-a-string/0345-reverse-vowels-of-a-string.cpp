class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        int low = 0;
        int high = n - 1;

        while(low < high){
            char ch1 = tolower(s[low]);
            char ch2 = tolower(s[high]);

            bool cond1 = (ch1 == 'a' || ch1 == 'e' || ch1 == 'i' || ch1 == 'o' || ch1 == 'u');
            bool cond2 = (ch2 == 'a' || ch2 == 'e' || ch2 == 'i' || ch2 == 'o' || ch2 == 'u');

            if(cond1 && cond2){
                swap(s[low], s[high]);
                low++;
                high--;
            }
            else if(!cond1){
                low++;
            }
            else if(!cond2){
                high--;
            }
        }
        return s;
    }
};