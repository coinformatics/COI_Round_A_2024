#include <bits/stdc++.h>
using namespace std;
// @author: MavrosOplarxigos

#define ll long long

int main() {
	
	ios::sync_with_stdio(false);

	int n,d;
	cin >> n >> d;

	int best = -1;

	for(int i=0;i<n;i++){
		int x,y,z;
		x = y = z = d;
		int k;
		cin >> k;
		for(int j=0;j<k;j++){
			int code;
			cin >> code;
		}
		best = (best==-1)?k:best;
		best = min(best,k);
	}

	cout << best << endl;

}
