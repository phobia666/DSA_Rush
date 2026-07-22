class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int elem = grid[0][0];
        int temp = 0;


        for(int z = 0; z < k; z++){
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                temp = grid[i][j];
                grid[i][j] = elem;
                elem = temp;
            }
        }
        grid[0][0] = elem;
        }


        return grid;
    }
};