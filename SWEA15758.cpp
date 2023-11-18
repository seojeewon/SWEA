#include <iostream>
#include <string>

using namespace std;
int cmin(int a, int b) {
	if (a < b) swap(a, b);
	if (b == 0) return a;
	return cmin(b, a - b);
}
bool check(string a, string b) {
	//최소공배수
	int m = cmin(a.size(), b.size());
	int result = a.size() * b.size() / m;

	string ra, rb;
	for (int i = 0; i < result / a.size(); i++) {
		ra += a;
	}
	for (int i = 0; i < result / b.size(); i++) {
		rb += b;
	}
	if (ra == rb) return true;
	return false;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;
	for (int test = 1; test <= T; test++) {
		cout << "#" << test << ' ';
		string a, b;
		cin >> a >> b;

		//a와 b 같은 경우
		
		if (a == b) {
			cout << "yes\n";
			continue;
		}
		if (check(a, b)) {
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}
		
		
	}
}