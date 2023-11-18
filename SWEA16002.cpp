#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

bool isComposite(int x) {
	for (int i = 2; i <= sqrt(x); i++) {
		if (x%i == 0) return true;
	}
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
		int n;
		cin >> n;
		for (int x = n + 1; x < 1000000001; x++) {
			//x가 합성수인경우
			if (isComposite(x)) {
				//y도 합성수
				if (isComposite(x-n)) {
					cout << x << ' ' << x-n << '\n';
					break;
				}
				else {
					continue;
				}
			}
		}
	}
	return 0;
}