#include <bits/stdc++.h>
#define grpah vector<vector<int>>

using namespace std;

graph adj;
int n;
vector<bool> visited;

void dfs(int s) {
	visited[s] = true;
	cout << s << endl;
	for (int x: adj[s]) {
		if (!visited[x])
			dfs(x);
	}
}

int main() {
}
