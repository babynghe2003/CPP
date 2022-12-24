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
	ll n,k,m;
	cin >> n >> k >> m;
	string s;
	cin >> s;
    ll q = 1, p = 1;
    ll l1 = 0, l2 = 1, r1 = 1, r2 = 0;
	
	for (ll j = 0;j < k; j++) {
		for (ll i = 0; i < n; i++){
			ll t1 = p%m, t2 = q%m;
			if (s[i] == 'R'){
                p=(p%m + r1%m)%m;
                q=(q%m + r2%m)%m;
					 l1 = t1;
					 l2 = t2;
			}else{
                p = (p%m + l1%m)%m;
                q= (q%m + l2%m)%m;
					 r1 = t1;
					 r2 = t2;
			}
			//cout << p << " " << q << endl;
		}
	}
	cout << p << " " << q << endl;

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
