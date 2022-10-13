#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct val{
 ll index;
 ll value;
};
void solve() {
	 ll n,x;
	 cin >> n >> x;
	val a[n];
	for (int i = 0; i < n; i++){
		cin >> a[i].value;
		a[i].index = i;
	}
	sort(a,a+n, [](val x, val y){
			return x.value < y.value;
	});



}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
