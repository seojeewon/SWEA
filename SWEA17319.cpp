#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	int T;
	cin >> T;
	for (int test = 1; test <= T; test++) {
		//���� ���
		cout << "#" << test << ' ';
		//�� �׽�Ʈ ���̽� �Է�
		int n; string s;
		cin >> n >> s;
		//Ȧ���� �Ұ���
		if (n % 2 == 1) {
			cout << "No\n";
			continue;
		}
		string s1 = s.substr(0, n / 2);
		string s2 = s.substr(n / 2, n);
		if (s1 == s2) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}

	return 0;
}