class Solution {
public:
    int rows, cols;

    int dfs(vector<vector<int>>& grid, int r, int c) {
        // Out of bounds or water or already visited
        if (r < 0 || c < 0 || r >= rows || c >= cols ||
            grid[r][c] == 0) {
            return 0;
        }

        // Mark land as visited
        grid[r][c] = 0;

        // Count current cell + connected land
        int area = 1;

        area += dfs(grid, r + 1, c); // Down
        area += dfs(grid, r - 1, c); // Up
        area += dfs(grid, r, c + 1); // Right
        area += dfs(grid, r, c - 1); // Left

        return area;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        rows = grid.size();
        cols = grid[0].size();

        int maxArea = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1) {
                    int area = dfs(grid, i, j);
                    maxArea = max(maxArea, area);
                }
            }
        }

        return maxArea;
    }
};