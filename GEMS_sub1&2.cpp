#include <bits/stdc++.h>
using namespace std;
// @author: MavrosOplarxigos

#define ll long long

int main() {
    ios::sync_with_stdio(false);

    ll n,m;
    cin >> n >> m;
    assert(n<=100);
    assert(m>=0 && m<=1);

    ll a[n];
    for(ll i=0;i<n;i++){
    	cin >> a[i];
	assert( a[i] >= 1 && a[i] <= n);
    }

    ll best = 0;
    for(ll i=0;i<n;i++){
	    for(ll j=i+1;j<n;j++){
		    if( a[i] > a[j] ){
			    ll good = (a[i]*a[i]) - (a[j]*a[j]);
			    ll bad = (a[i]+a[j]) * (a[i]+a[j]);
			    ll my = (m==1)?good:bad;
			    best = max(best,my);
		    }
	    }
    }

    cout << best << endl;

}
