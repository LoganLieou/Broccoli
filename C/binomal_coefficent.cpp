#include <bits/stdc++.h>
#define ll long long

using namespace std;

// analytic forumla for binomal coefficent / "choose"
ll C(int a, int b) {
	ll res = 1;
	for (int i = a - b + 1; i <= a; ++i) res *= i;
	for (int i = 2; i <= b; ++i) res /= i;
	return res;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cin.sync_with_stdio(0);
	int t; cin >> t;

	while(t--) {
		int a, b; cin >> a >> b;
		cout << C(a, b) << "\n";
	}
}
