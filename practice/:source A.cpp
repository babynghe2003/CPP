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

void solve()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << n;

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	indef();

	int t;
	cin >> t;

	while (t--)
	{
		solve();
	}

	return 0;
}
