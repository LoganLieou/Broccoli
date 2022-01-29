#include <bits/stdc++.h>
#define ll long long
#define PB push_back
#define N size
#define P pop

using namespace std;

void dfs(vector<vector<char>>& grid, int r, int c) {
	if (r < 0 || r >= grid.N() || c < 0 || c >= grid[0].N() ||
			grid[r][c] != '.')
		return;

	grid[r][c] = 'v';

	dfs(grid, r+1, c);
	dfs(grid, r-1, c);
	dfs(grid, r, c+1);
	dfs(grid, r, c-1);
}

int countingRooms(vector<vector<char>>& grid) {
	int count = 0;
	for (int i = 0; i < grid.N(); i++) {
		for (int j = 0; j < grid[0].N(); j++) {
			if (grid[i][j] == '.') {
				dfs(grid, i, j);
				count++;
			}
		}
	}
	return count;
}

int main() {
	int n, m; cin >> n >> m;

	vector<vector<char>> rooms(n, vector<int>(m, '#'));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> rooms[i][j];
		}
	}

	cout << countingRooms(rooms) << endl;
}
