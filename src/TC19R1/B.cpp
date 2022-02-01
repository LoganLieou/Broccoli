#include <bits/stdc++.h>
#define N size
#define ll long long

using namespace std;

void solve(int n, int d, int x, int y) {
}

int main() {
	ios::sync_with_stdio(0);
	cin.sync_with_stdio(0); cin.tie(0);

	int n, d; cin >> n >> d;
	int area = n * d;

	int m; cin >> m;
	while (m--) {
		int x, y; cin >> x >> y;
		solve(n, d, x, y);
	}
}
