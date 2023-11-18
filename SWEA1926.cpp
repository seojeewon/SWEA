#include <iostream>
#include <string>
using namespace std;

void game(int n) {
	bool flag = 0;
	string number = to_string(n);
	for (int i = 0; i < number.size(); i++) {
		if (number[i] == '3' || number[i] == '6' || number[i] == '9')
			flag = 1;
	}
	if (flag) {
		int cnt = 0;
		string ans;
		for (int i = 0; i < number.size(); i++) {
			if (number[i] == '3' || number[i] == '6' || number[i] == '9')
				cnt++;
		}
		for (int i = 0; i < cnt; i++) {
			ans += '-';
		}
		cout << ans;
	}
	else {
		cout << n;
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		game(i);
		cout << ' ';
	}
	
	return 0;
	
}