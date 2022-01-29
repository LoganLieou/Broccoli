#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	int n; cin >> n;
	vector<ll> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	set<ll> res;
	for (ll x : arr) res.insert(x);
	cout << res.size() << endl;
}
