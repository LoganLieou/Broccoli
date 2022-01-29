#include <bits/stdc++.h>
#define ll long long

using namespace std;

// O(1)
ll toN(ll n) { return ((n + 1)*n) / 2; }

// O(n)
ll sum(vector<ll> arr) { ll res = 0; for (ll x : arr) res += x; return res; }

void solution(const vector<ll>& arr, ll n) {
	// edge case
	if (n <= 1) return;
	ll a = toN(n);
	ll b = sum(arr);
	cout << (a - b) << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cin.sync_with_stdio(0);

	ll n; cin >> n;
	vector<ll> arr(n-1);
	for (int i = 0; i < n-1; i++) cin >> arr[i];
	solution(arr, n);
}
