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
			y += (code==1)?1:0;
			y -= (code==2)?1:0;
			x += (code==3)?1:0;
			x -= (code==4)?1:0;
			z += (code==5)?1:0;
			z -= (code==6)?1:0;
		}
		if( y == 1 && x == 1 && z == 1 ){
			best = (best==-1)?k:best;
			best = min(best,k);
		}
	}

	cout << best << endl;

}
