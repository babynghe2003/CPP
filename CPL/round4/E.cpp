#include <bits/stdc++.h>
using namespace std;
#define ll long long
void indef(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
}
int a[100005];
int mod = 1e9+7;

void solve() {
	ll n,k;
    cin >> n >> k;

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll sumMax = 0;
    ll d=0;
    for (int i = 0; i <= n-k; i++){
        ll sum = 2199023255551;
        for (int j = i; j<i+k; j++){
            sum&=a[j];
        }
        cout << sum << endl;
        if (sumMax == sum){
            d=(d+1)%mod;
        }else if (sumMax < sum){
            d = 1;
            sumMax = sum;
        }
    }
	
	cout << sumMax << endl;
    cout << d;


}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// indef();

	int t = 1;
	//cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}
