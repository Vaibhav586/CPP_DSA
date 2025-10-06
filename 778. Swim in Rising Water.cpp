class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
        using T = pair<int, pair<int,int>>;
        priority_queue<T, vector<T>, greater<T>> pq;
        pq.push({grid[0][0], {0, 0}});
        dist[0][0] = grid[0][0];
        int dirs[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
        
        while(!pq.empty()) {
            auto [time, pos] = pq.top();
            pq.pop();
            int r = pos.first, c = pos.second;
            if (r == n-1 && c == n-1) return time;
            for (auto &d : dirs) {
                int nr = r + d[0], nc = c + d[1];
                if (nr>=0 && nr<n && nc>=0 && nc<n) {
                    int newTime = max(time, grid[nr][nc]);
                    if (newTime < dist[nr][nc]) {
                        dist[nr][nc] = newTime;
                        pq.push({newTime, {nr, nc}});
                    }
                }
            }
        }
        return -1;
    }
};
