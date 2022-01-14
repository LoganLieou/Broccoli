#include <bits/stdc++.h>
#define vi vector<int>
#define N size

using namespace std;

// O(n^3) solution
int maxSum0(vi v) {
	int best = 0;
	for (int i = 0; i < v.N(); i++) {
		for (int j = i; j < v.N(); j++) {
			int sum = 0;
			for (int k = i; k <= j; k++) {
				sum += v[k];
			}
			best = max(best, sum);
		}
	}
	return best;
}

// O(n^2) solution
int maxSum1(vi v) {
	int best = INT_MIN;
	for (int i = 0; i < v.N(); i++) {
		int sum = 0;
		for (int j = i; j < v.N(); j++) {
			sum += v[j];
			best = max(sum, best);
		}
	}
	return best;
}

// O(n) solution
int maxSum2(vi v) {
	int best = 0, sum = 0;
	for (int i = 0; i < v.N(); i++) {
		sum = max(v[i], sum + v[i]);
		best = max(best, sum);
	}
	return best;
}

int main() {
	ios::sync_with_stdio(0);
	vi v = {1, -2, 3, -4, 5, 6, -2, 1, 3};

	// these should all output the same solution which is 13
	cout << maxSum0(v) << "\n";
	cout << maxSum1(v) << "\n";
	cout << maxSum2(v) << "\n";
}
