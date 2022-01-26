#include <bits/stdc++.h>
#define ll long long

using namespace std;

// generate a vector of prime values
bool isPrime(ll n) {
	vector<bool> is_prime(n + 1, true);
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i <= n; i++) {
		if (is_prime[i] && (long long)i * i <= n) {
			for (int j = i * i; j <= n; j += 1)
				is_prime[j] = false;
		}
	}
	return is_prime[n];
}

int main() { 
	cout << isPrime(4) << endl;
}
