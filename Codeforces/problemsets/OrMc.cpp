#include <bits/stdc++.h>
using namespace std;
#define ll long long
void indef(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
}

void solve() {
	ll n,l,t;
	ll a,b;
	cin >> n >> l >> t;

	vector<ll> A(n);
	vector<pair<ll,ll>> ope(l);

	for (ll i = 0; i < l; i++){
		cin >> a >> b;
		ope[i]={a,b};
	}
	for (int i = 0; i < n; i++){
		cin >> A[i];
	}


	if (t > 2*l) t = 2*l;
	for (int j = 0; j < t; j++){
		cout << ope[j%l].first << " " << ope[j%l].second<< endl;
		A[ope[j%l].first-1] |= A[ope[j%l].second-1];
	}
	for (int i = 0; i < n; i++){
		cout << A[i] << " ";
	}

}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	indef();

	int t = 1;

	while (t--) {
		solve();
	}

	return 0;
}
