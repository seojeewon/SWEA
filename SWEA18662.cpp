#include <iostream>
#include <cmath>

using namespace std;

bool testing(int x, int y, int z) {
	if (y - x == z - y) return true;
	return false;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("input.txt", "r", stdin);

	int T;
	cin >> T;

	for (int test = 1; test <= T; test++) {
		cout << "#" << test << ' ';
		int x, y, z;
		double answer = 10000.0;
		cin >> x >> y >> z;
		if (testing(x, y, z)) {
			cout << 0 << '\n';
			continue;
		}
		cout << fixed;
		cout.precision(1);
		//x�� �ٲ۴ٰ� ����
		double nx = (double)(2 * y - z);
		if (answer > abs(nx - (double)x)) {
			answer = abs(nx - (double)x);
		}
		//y�� �ٲ۴ٰ� ����
		double ny = (double)(x + z) / 2.0;
		if (answer > abs(ny - (double)y)) {
			answer = abs(ny - (double)y);
		}
		//z�� �ٲ۴ٰ� ����
		double nz = (double)(2 * y - x);
		if (answer > abs(nz - (double)z)) {
			answer = abs(nz - (double)z);
		}
		cout << answer << '\n';
	}
	return 0;
}