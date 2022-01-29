#include <bits/stdc++.h>
#define N size
#define PB push_back
#define ll long long

using namespace std;

void print(vector<ll> v) { for (ll x: v) cout << x << " "; }

vector<ll> weirdAlgorithm(ll n) {
	vector<ll> temp;
	while (n != 1) {
		temp.PB(n);
		n = n % 2 == 0 ? n / 2 : (n * 3) + 1;
	}
	temp.PB(1);
	return temp;
}

int main() {
	// fastio
	ios::sync_with_stdio(0);
	cin.tie(); cin.sync_with_stdio(0);

	// input a number
	ll n; cin >> n;
	vector<ll> res = weirdAlgorithm(n); print(res);
}
