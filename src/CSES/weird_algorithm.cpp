#include <bits/stdc++.h>
#define N size
#define PB push_back

using namespace std;

void print(vector<int> v) { for (int x: v) cout << x << " "; }

vector<int> weirdAlgorithm(int n) {
	vector<int> temp;
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
	int n; cin >> n;
	vector<int> res = weirdAlgorithm(n); print(res);
}
