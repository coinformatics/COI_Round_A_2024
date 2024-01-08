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

	vector < pair < int , ll > > cp;
	for(int i=0;i<n;i++){
		int c;
		ll p;
		cin >> c >> p;
		cp.push_back(make_pair(c,p));
	}

	ll best = 0;
	ll besti = 1;

	for(int i=1;i<=m;i++){
		ll temp = 0;
		for(size_t j = 0; j<cp.size(); j++){
			int c = cp[j].first;
			ll p = cp[j].second;
			if( i == c ){
				temp += (s[c]+k>=p)?1:0;
			}
			else{
				temp += (s[c]>=p)?1:0;
			}
		}
		if( temp > best ){
			best = temp;
			besti = i;
		}
	}

	cout << best << " " << besti << endl;

}
