#include <bits/stdc++.h>
#define N 5

using namespace std;

void print(int arr[], int n) { for (int i = 0; i < n; i++) printf("%d ", arr[i]); }

void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j+1]);
			}
		}
	}
}

void merge(int arr[], int l, int m, int r) {
	int i, j, k, nl, nr;
	nl = m-l+1; nr = r-m;
	int larr[nl], rarr[nr];
	for (int i = 0; i < nl; i++) larr[i] = arr[l+r];
	for (int j = 0; j < nr; j++) 
}

void mergeSort(int arr[], int lo, int hi) {
	int m;
	if (lo < hi) {
		int m = l + (r - l) / 2;
		mergeSort(arr, lo, m);
		mergeSort(arr, m+1, hi);
		merge(arr, lo, m, hi);
	}
}

int main() {
	int arr[N] = {1, 5, 3, 2, 8};
	print(arr, N);
	printf("\n");

	// bubble sort O(n^2)
	bubbleSort(arr);
	print(arr, N);
	printf("\n");

	// sorting using stl O(nlogn)
	sort(arr, arr+N);
	print(arr, N);
}
