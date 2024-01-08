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
	ll g[m+1];
	for(int i=1;i<=m;i++){
		cin >> s[i];
		g[i] = 0;
	}

	int ans = 0;
	int bg = 0;
	int bgc = 1;

	for(int i=0;i<n;i++){
		int c;
		ll p;
		cin >> c >> p;
		if( s[c] >= p ){
			ans++;
		}
		else if( s[c] + k >= p ){
			g[c]++;
			if( g[c] > bg ){
				bg = g[c];
				bgc = c;
			}
		}
	}

	cout << ans+bg << " " << bgc << endl;

}
