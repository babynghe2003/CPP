#include <bits/stdc++.h>
using namespace std;
#define ll long long
void indef()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int in(char x)
{
	return x - 48;
}
ll L[1005];
ll R[1005];

void solve()
{
	ll n;
	while (1)
	{
		cin >> n;
		if (n == 0)
			break;
		string a, b, c;
		cin >> a >> b >> c;
		ll ans = 0;
		R[n] = 0;
		L[n] = 0;
		for (int i = n - 1; i >= 0; i--)
		{
			L[i] = 0;
			R[i] = 0;
			if ((in(a[i]) + in(b[i])) % 10 == in(c[i]))
				{
					L[i] = 1;
					R[i] = (in(a[i]) + in(b[i])) / 10;
				}
			if (i == 0){
				for (int j = n - 1; j > i; j--)
				{
					if ((in(a[i]) + in(b[i]) + R[j])== in(c[i]))
					{
						L[i] = max(L[i], L[j] + 1);
						R[i] = (in(a[i]) + in(b[i]) + R[j]) / 10;
					}
				}
			}else{
				if ((in(a[i]) + in(b[i])) % 10 == in(c[i]))
				{
					L[i] = 1;
					R[i] = (in(a[i]) + in(b[i])) / 10;
				}
				for (int j = n - 1; j > i; j--)
				{
					if ((in(a[i]) + in(b[i]) + R[j]) % 10 == in(c[i]))
					{
						L[i] = max(L[i], L[j] + 1);
						R[i] = (in(a[i]) + in(b[i]) + R[j]) / 10;
					}
				}
			}
			
			if (R[i] == 0){
				ans = max(ans,L[i]);
			}
		}
		// for (int i = 0; i < n; i++){
		// 	cout << L[i] << " ";
		// }
		// cout << endl;
		// for (int i = 0; i < n; i++){
		// 	cout << R[i] << " ";
		// }
		// cout << endl;
		cout << n - ans << endl;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// indef();

	int t = 1;
	// cin >> t;

	while (t--)
	{
		solve();
	}

	return 0;
}
