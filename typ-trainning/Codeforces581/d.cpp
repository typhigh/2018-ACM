#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int cnt = 0;
	for (int i = s.size()-1; i >= 0; --i) {
		if (s[i] == '0') ++cnt;
		else if (cnt) --cnt;
		else s[i] = '0';
	}
	cout << s << endl;
	return 0;
}
