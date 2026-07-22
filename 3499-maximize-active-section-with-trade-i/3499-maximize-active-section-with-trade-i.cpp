class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.size();
        int cnt = 0;
        int ans = 0;

        for(char ch : s){
            if(ch == '1'){
                cnt++;
            }
        }

        int cntOne = 0;
        int fCnt = 0;
        int low = 0;
        int high = 0;
        bool trigger = false;
        int resInd = 0;
        unordered_set<int> st;
        s = "1" + s + "1";
        n = n + 2;

        while(high < n){
            if(s[high] == '1'){
                if(trigger){
                    int prevAns = ans;
                    ans = max(ans, high - low - cntOne);
                    cntOne = 1;
                    low = resInd;
                    trigger = false;
                    high++;
                }
                else{
                    if(st.find(0) != st.end()){
                        cntOne++;
                        st.insert(1);
                        high++;
                    }
                    else{
                        low++;
                        high++;
                    }
                }
            }
            else{
                if(st.find(1) != st.end()){
                    if(!trigger){
                        resInd = high;
                    }
                    trigger = true;
                }
                st.insert(0);
                high++;
            }
        }
        return cnt + ans;
    }
};