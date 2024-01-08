#include <bits/stdc++.h>
using namespace std;
// @author: MavrosOplarxigos

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    
    ll n,q;
    cin >> n >> q;

    ll x[n];
    for(int i=0;i<n;i++){
    	cin >> x[i];
    }

    ll t[n];
    t[0] = x[0] * x[0] - x[0];
    for(int i=1;i<n;i++){
        t[i] = t[i-1] + (x[i]*x[i]-x[i]);
    }

    for(int i=0;i<q;i++){
        ll m;
        cin >> m;
        for(int i=0;i<n;i++){
            if(t[i] >= m){
                cout << i+1 << endl;
                continue;
            }
        }
        cout << -1 << endl;
    }

}
