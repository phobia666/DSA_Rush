class Solution {
public:
    bool isPalindrome(string s) {
        string newS = "";

        for(char ch : s){
            if(isdigit(ch) || isalpha(ch)){
                newS += tolower(ch);
            }
        }

        int low = 0;
        int high = newS.size() - 1;

        while(low <= high){
            if(newS[low] != newS[high]){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
};