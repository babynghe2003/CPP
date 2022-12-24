#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 1010
#define mod 1000000007

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

void solve() {
	ll n;
	cin >> n;
	set<ll> set;
	for (int i = 0; i <n; i++){
		ll c;
		cin >> c;
		set.insert(c);
	}
	cout << set.size();
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    indef();
    
    int t = 1;
    // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
// 1<<n = 2^n
