#include <bits/stdc++.h>
#define vi vector<int>
#define N size
#define PB push_back
using namespace std;

void print(vi v) { for (int x : v) cout << x << " "; }

// O(n^2) algorithm
void bubbleSort(vi& v) {
	for (int i = 0; i < v.N(); i++) {
		for (int j = 0; j < v.N() - 1; j++) {
			if (v[j] > v[j + 1]) {
				swap(v[j], v[j + 1]);
			}
		}
	}
}

// define a struct with comp operator
struct P {
	int x, y;

	P(): x(0), y(0) {}
	P(int _x): x(_x), y(0) {}
	P(int _x, int _y): x(_x), y(_y) {}

	bool operator<(const P& p) {
		if (x != p.x) return x < p.x;
		else return y < p.y;
	}
};

int main() {
	vi v = {1, 3, 9, 4, 2, 1};
	print(v); printf("\n");
	bubbleSort(v);
	print(v); printf("\n");

	// library function sort() is always better :pepega:
	sort(v.rbegin(), v.rend()); // reverse sort
	print(v); printf("\n");

}
