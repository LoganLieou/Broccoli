#include <bits/stdc++.h>
#define ll long long
#define vl vector<ll>
#define N size

using namespace std;

bool isAP(vl v) {
	ll cd = v[0];
	for (int i = 1; i < v.N() - 1; i++) {
		ll temp = cd;
		cd = v[i] - cd;
		if (temp != cd) return false;
	}
	return true;
}

int main() {
	int t; cin >> t;
	while(t--) {
		// read in a vector
		int n; cin >> n;
		vl a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		// determine if arithmetic progression
		cout << (isAP(a) ? "YES" : "NO") << "\n";
	}
}
