#include <bits/stdc++.h>
#define ll long long
#define PB push_back
#define N size
#define PO pop
#define PU push

using namespace std;

// O(n)
void solve(ll n) {
	// a > b
	// a > 0 && b > 0
	// a + b = n
	/*
	ll a = n - 1, b = 1;
	int count = 0;
	while (a > b) {
		a--; b++;
		count++;
	}
	cout << count << "\n";
	*/
	if (n <= 2) cout << 0 << "\n";
	else cout << (n/2) << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cin.sync_with_stdio(0);

	int t; cin >> t;

	while (t--) {
		ll n; cin >> n;
		solve(n);
	}
}
