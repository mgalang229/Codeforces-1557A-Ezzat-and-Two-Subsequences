#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<double> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// find the maximum number
		double mx = *max_element(a.begin(), a.end());
		double index = -1;
		for (int i = 0; i < n; i++) {
			if (a[i] == mx) {
				// save the index (position - 1) of the maximum number
				index = i;
			}
		}
		double sum = 0;
		for (int i = 0; i < n; i++) {
			if (i != index) {
				// calculate the sum of all the numbers which do not have the
				// index of the maximum number which was saved from the code block above
				sum += a[i];
			}
		}
		// print the sum of the maximum number and sum divided by 'n' - 1 (average)
		cout << fixed << setprecision(9) << mx + (sum / (n - 1)) << '\n';
	}
	return 0;
}
