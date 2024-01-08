#include <bits/stdc++.h>
using namespace std;
// @author: MavrosOplarxigos

#define ll long long

int main() {
	
	ios::sync_with_stdio(false);

	int n,m;
	ll k;

	cin >> n >> m >> k;

	ll s[m+1];
	for(int i=1;i<=m;i++){
		cin >> s[i];
	}

	int ans = 0;
	for(int i=0;i<n;i++){
		int c;
		ll p;
		cin >> c >> p;
		if( s[c] >= p ){
			ans++;
		}
	}

	cout << ans << " " << 1 << endl;

}
