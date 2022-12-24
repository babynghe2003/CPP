#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second
void indef(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
}

void solve() {
	int n;
	cin >> n;
	vector<pair<ll, ll >> point(n);
	for (int i = 0; i < n; i++){
		ll x,y;
		cin >> x >> y;
		point[i] = {x,y}; 
	}
	ll S = 0;
	for (int i = 0; i < n; i++ ){
	 	S+= point[i % n].X * point[(i+1) % n].Y - point[i%n].Y * point[(i+1)%n].X; 
	}
	cout << abs(S);	


}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	indef();

	int t = 1;
	//cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}
