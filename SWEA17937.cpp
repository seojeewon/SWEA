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
		string a, b;
		cin >> a >> b;
		if (a == b) {
			cout << a << '\n';
			continue;
		}
		cout << 1 << '\n';
		continue;
	}
}