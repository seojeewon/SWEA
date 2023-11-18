#include <iostream>
#include <queue>
#include <cmath>

using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;
	for (int test = 1; test <= T; test++) {
		cout << "#" << test << ' ';
		long long n;
		cin >> n;

		long long answer = n - 1;	//최대 길이=n-1
		for (long long i = 2; i <= sqrt(n); i++) {
			if (n%i) continue;
			//나누어 떨어질 때
			long long j = n / i;
			if (i - 1 + j - 1 < answer) {
				answer = i - 1 + j - 1;
			}
			
		}
		cout << answer << '\n';
	}
	return 0;
}