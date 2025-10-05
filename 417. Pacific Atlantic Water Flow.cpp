class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int R = heights.size();
        int C = heights[0].size();

        vector<vector<int>> pacific(R, vector<int>(C, 0));
        vector<vector<int>> atlantic(R, vector<int>(C, 0));
        vector<vector<int>> res;

        for (int c = 0; c < C; c++) {
            dfs(heights, 0, c, pacific);
            dfs(heights, R - 1, c, atlantic);
        }
        for (int r = 0; r < R; r++) {
            dfs(heights, r, 0, pacific);
            dfs(heights, r, C - 1, atlantic);
        }

        for (int r = 0; r < R; r++) {
            for (int c = 0; c < C; c++) {
                if (pacific[r][c] && atlantic[r][c]) {
                    res.push_back({r, c});
                }
            }
        }
        return res;
    }

private:
    void dfs(vector<vector<int>>& heights, int r, int c, vector<vector<int>>& ocean) {
        int R = heights.size();
        int C = heights[0].size();
        if (ocean[r][c]) return;

        ocean[r][c] = 1;
        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};

        for (int i = 0; i < 4; i++) {
            int rr = r + dr[i];
            int cc = c + dc[i];
            if (rr >= 0 && rr < R && cc >= 0 && cc < C && heights[rr][cc] >= heights[r][c]) {
                dfs(heights, rr, cc, ocean);
            }
        }
    }
};
