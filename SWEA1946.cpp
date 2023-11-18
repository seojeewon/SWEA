#include <iostream>
#include <string>
#include <cstdio>

using namespace std;
const int MX = 10;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	int T;
	cin >> T;

	for (int test = 1; test <= T; test++) {
		cout << '#' << test << '\n';
		string s;

		int n;	//¾ËÆÄºª°ú ¼ýÀÚ ½ÖÀÇ °³¼ö
		cin >> n;

		int cnt=0;

		for(int i =0;i<n;i++){
			char ch; int num;
			cin >> ch >> num;

			while (num!=0) {
				if (cnt != 0 && cnt % 10 == 0) {
					s += '\n';
					cnt = 0;
				}
				s += ch;
				cnt++;
				num--;
			}
			
		}
		cout << s << '\n';
	}

	return 0;
}