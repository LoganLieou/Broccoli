#include <bits/stdc++.h>
#define ll long long
#define PB push_back
#define N size
#define vi vector<int>
#define vl vector<ll>

using namespace std;

// formula for fib
ll fib(int n) { return (pow((1 + sqrt(5)), n) - pow((1 - sqrt(5)), n)) / (pow(2, n) * sqrt(5)); }

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cin.sync_with_stdio(0);

	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		cout << fib(n) << "\n";
	}
}
