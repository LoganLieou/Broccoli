#include <bits/stdc++.h>
#define N size

using namespace std;

// perform dfs
void dfs(vector<vector<char>>& grid, int r, int c) {
	// edge case check
	if (r < 0 or r >= grid.N() or c < 0 or c >= grid[0].N() or grid[r][c] == '#') return;

	grid[r][c] = '#';

	// recursive search
	dfs(grid, r+1, c);
	dfs(grid, r-1, c);
	dfs(grid, r, c-1);
	dfs(grid, r, c+1);
}

int countingRooms(vector<vector<char>>& grid) {
	int result = 0;
	for (int r = 0; r < grid.N(); r++) {
		for (int c = 0; c < grid[0].N(); c++) {
			if (grid[r][c] == '.') {
				result++;
				dfs(grid, r, c);
			}
		}
	}
	return result;
}

int main() {
	int t; cin >> t;
	while(t--) {
		vector<vector<char>> rooms;
		int n, m; cin >> n >> m;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> rooms[i][j];
			}
		}

		// dfs
		cout << countingRooms(rooms) << endl;
	}
}
