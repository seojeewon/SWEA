#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;
	for (int test = 1; test <= T; test++) {
		cout << "#" << test << ' ';
		int n;
		cin >> n;

		int ans = 0;
		//축 위의 점
		ans += 4 * n + 1;
		//그 외
		int part = 0;
		for (int x = 1; x < n; x++) {
			for (int y = 1; y < n; y++) {
				if (x * x + y * y > n * n) break;
				part++;
			}
		}
		ans += 4 * part;
		cout << ans << '\n';
	}
	return 0;
}