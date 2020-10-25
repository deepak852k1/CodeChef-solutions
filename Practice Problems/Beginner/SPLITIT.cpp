#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--)
  {
		int n;
		cin >> n;
		string s;
		cin >> s;
		char b = s[n - 1]; 
		int f = 0;
		
		for (int i = 0; i < n - 1; i++)
		 {
			if (s[i] == b) 
			{
			f = 1; break;
			}
		}
		if (f) 
		cout << "YES" << '\n';
		else 
		cout << "NO" << '\n';

	}
	return 0;
}
