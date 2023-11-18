#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	cin >> T;
	for (int test = 1; test <= T; test++) {
		vector<int> v(10, 0);
		for (int i = 0; i < 10; i++) {
			cin >> v[i];
		}
		sort(v.begin(), v.end());

		int sum = 0;
		for (int i = 1; i < 9; i++) {
			sum += v[i];
		}
		int avg = (int)round((double)sum / (double)8);

		cout << '#' << test << ' ';
		cout << avg << '\n';
	}
	return 0;
}