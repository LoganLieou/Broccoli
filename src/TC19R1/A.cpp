#include <bits/stdc++.h>
#define N size
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cin.sync_with_stdio(0);

	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < a.N(); i++) cin >> a[i];
	auto it = find(a.begin(), a.end(), 1);
	cout << ((it == a.end()) ? "EASY" : "HARD") << endl;
}
