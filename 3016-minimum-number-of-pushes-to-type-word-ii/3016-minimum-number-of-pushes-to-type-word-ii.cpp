class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        vector<int> freq(26, 0);
        int ans = 0;
        int sum = 0;

        for(char ch : word){
            freq[ch - 97]++;
        }

        sort(freq.begin(), freq.end(), greater<int>());


        int i = 0;
        while(i < 26 && freq[i] != 0){
            if(i < 8){
                ans += freq[i];
            }
            else if(i < 16){
                ans += (freq[i] * 2);
            }
            else if(i < 24){
                ans += (freq[i] * 3);
            }
            else{
                ans += (freq[i] * 4);
            }
            i++;
        }

        return ans;

    }
};