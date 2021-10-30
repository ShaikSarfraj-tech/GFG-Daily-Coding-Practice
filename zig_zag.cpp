#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define pb emplace_back
#define pp pop_back
#define powof2(x) (x && !(x & (x-1)))

#define INF	1000000000+10
#define mod 1000000007

void solve() {
	string s; cin >> s;
	int n; cin >> n;	

	string vec[n];
	bool down; 	//true if down, false if up
	int row = 0;
	int len = s.length();
	for(int i = 0; i < len; i++) {
		vec[row].push_back(s[i]);
		if(row == n-1)
			down = false;	//up
		else if(row == 0)
			down = true;
		if(down == true) 	//down
			row++;
		else
			row--;
	}
	string res = "";
	for(int i = 0; i < n; i++) {
		res += vec[i];
		// cout << vec[i];
	}
	cout << res << "\n";
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	//t = 1;
	cin >> t;
	while(t--) {
		solve();
	}

	return 0;
}