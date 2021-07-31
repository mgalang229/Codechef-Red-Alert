#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, d, h;
		cin >> n >> d >> h;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int cur = 0;
		bool checker = true;
		for (int i = 0; i < n; i++) {
			if (a[i] > 0) {
				// if 'a[i]' is greater than 0, then add it to 'cur'
				cur += a[i];
			} else {
				// otherwise, get the maximum between 0 and the difference of 'cur' and 'd'
				cur = max(0, cur - d);
			}
			if (cur > h) {
				// if 'cur' is STRICTLY greater than 'h', then set 'checker' 
				// to false and break the loop
				checker = false;
				break;
			}
		}
		cout << (!checker ? "YES" : "NO") << '\n';
	}
	return 0;
}
