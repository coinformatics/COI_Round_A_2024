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

    if( m == 1 ){
	    ll sma = n-1;
	    for(int i=n-2;i>=0;i--){
		    if( a[i] > a[sma] ){
			    best = max(best,(a[i]*a[i])-(a[sma]*a[sma]));
		    }
		    else{
			    sma = i;		    	
		    }
	    }
    }
    else{
	    ll big = 0;
	    for(int i=1;i<n;i++){
		    if( a[big] > a[i] ){
			    best = max(best,(a[i]+a[big])*(a[i]+a[big]));
		    }
		    else{
			    big = i;
		    }
	    }
    }

    cout << best << endl;
    
}
