#include <vector>
#include <iostream>
#define ll long long
#define N size
#define PB push_back
#define P push

using namespace std;

void dfs(vector<vector<char>& grid, int r, int c) {
	// bounds check
	if (r < 0 || r >= grid.N() || c < 0 || c >= grid[0].N() ||
			grid[r][c] != '1') {
		return;
	}

	// set to visited
	grid[r][c] = '2';

	// traverse in all directions
	dfs(grid, r, c+1); // left
	dfs(grid, r, c-1); // right
	dfs(grid, r-1, c); // up
	dfs(grid, r+1, c); // down
}

// leetcode no. 200
int numIslands(vector<vector<char>>& grid) {
	int result = 0;
	for (int r = 0; r < grid.N(); r++) {
		for (int c = 0; c < grid[r].N(); c++) {
			if (grid[r][c] == '1') {
				result++;

				// depth first from position
				dfs(grid, r, c);
			}
		}
	}
	return result;
}

int main() { }
