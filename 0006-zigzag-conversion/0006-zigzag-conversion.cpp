class Solution {
public:
    string convert(string s, int numRows) {
        int len = s.size();
        string ans = "";
        int gap1 = 2 * (numRows - 1);
        int gap2 = 0;
        int cnt = 0;

        if(numRows == 1){
            return s;
        }

        for(int i = 0; i < numRows; i++){
            int index = i;
            if(gap1 == 0 || gap2 == 0){
                while(index < len){
                    ans += s[index];
                    index += gap1 + gap2;
                }
            }
            else{
                while(index < len){
                    ans += s[index];
                    if(cnt % 2 == 0){
                        index += gap1;
                    }
                    else{
                        index += gap2;
                    }
                    cnt++;
                }
            }

            cnt = 0;
            gap1 -= 2;
            gap2 += 2;
        }
        return ans;
    }
};