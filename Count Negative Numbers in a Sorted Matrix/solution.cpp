class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        // double for loop search was easier & better on time-space complexity in C++
        int m = grid.size(), n = grid[0].size(), ans = 0;
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                ans += (grid[i][j] < 0);
            }
        }
        return ans;
    }
};
