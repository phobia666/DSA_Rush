class Solution {
public:

    void setZero(vector<vector<int>>& arr){
    int n = arr.size();
    int m = arr[0].size();
    vector<vector<int>> zeroIndexes;


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 0){
                zeroIndexes.push_back({i, j});
            }
        }
    }


    // for(int i = 0; i < zeroIndexes.size(); i++){
    //     cout << zeroIndexes[i][0] << endl;
    // }

    for(int i = 0; i < zeroIndexes.size(); i++){
        int row = 0, col = 0;
        bool condi = true, condj = true;

        while(condi || condj){
            if(row == n){
                condi = false;
            }
            else{
                arr[row][zeroIndexes[i][1]] = 0;
                row++;
            }
            if(col == m){
                condj = false;
            }
            else{
                arr[zeroIndexes[i][0]][col] = 0;
                col++;
            }
        }
    }
}

    void setZeroes(vector<vector<int>>& arr) {
        setZero(arr);
    }
};