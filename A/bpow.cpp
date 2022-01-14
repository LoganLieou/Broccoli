#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll rbpow(int a, int n) {
	if (n == 0) return 1;
	ll res = rbpow(a, n/2);
	if (n % 2) return res * res * a;
	else return res * res;
}

ll bpow(int a, int n) {
	ll res = 1;
	while (n > 0) {
		if (n & 1) res *= a;
		a *= a;
		n >>= 1;
	}
	return res;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cin.sync_with_stdio(0);

	int t; cin >> t;
	while(t--) {
		int a, n; cin >> a >> n;
		cout << bpow(a, n) << "\n";
	}
}
