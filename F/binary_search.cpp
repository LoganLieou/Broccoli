#include <bits/stdc++.h>
#define ll long long
#define N size
#define vi vector<int>
#define S second
#define F first

using namespace std;

// standard binary search
int binarySearch(vi v, int x) {
	int a = 0, b = v.N() - 1;
	while (a <= b) {
		int k = (a + b) / 2;
		if (v[k] == x) return k;
		if (v[k] >  x) b = k - 1;
		else a = k + 1;
	}
	return -1;
}

// also O(log n) jump search searches n/2*n per jump smth smth
int jumpSearch(vi v, int x) {
	int k = 0;
	for (int b = v.N()/2; b >= 1; b /= 2) {
		while(k+b < v.N() && v[k+b] <= x) k += b;
	}
	return v[k] == x ? k : -1;
}

int main() {
	vi v = {1, 2, 3};
	cout << binarySearch(v, 4) << "\n";
	cout << jumpSearch(v, 4) << "\n";
	cout << binarySearch(v, 3) << "\n";
	cout << jumpSearch(v, 3) << "\n";
}
