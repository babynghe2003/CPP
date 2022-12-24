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
	int a[7];
	for (int i = 0; i < 7; ++i)
	{
		cin>>a[i];
	}
	sort(a,a+7);
	cout << a[0] << " " << a[1] << " " << a[6]-a[0]-a[1] << endl;
}
 
int main() {
	// ios::sync_with_stdio(false);
	// cin.tie(nullptr);

	//indef();

	int t;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}
