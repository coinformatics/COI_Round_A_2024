#include <bits/stdc++.h>
using namespace std;
// @author: MavrosOplarxigos

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    
    ll n,q;
    cin >> n >> q;

    ll a[n];
    for(int i=0;i<n;i++){
    	cin >> a[i];
    }

    ll K = a[0] * a[0] - a[0];

    for(int i=0;i<q;i++){
        
        ll m;
        cin >> m;
        
        ll s = m/K + ((m%K==0)?0:1);

        if(s<=n){
            cout << s << endl;
        }
        else{
            cout << -1 << endl;
        }

    }

}
