#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<vector<ll> > dp(n, vector<ll>(n));
    for (int r = 0; r < n; ++r)
    {
        cin >> a[r];
        dp[r][r] = a[r];
        for (int l = r - 1; l >= 0; --l)
            dp[l][r] = max(a[l] - dp[l + 1][r], a[r] - dp[l][r - 1]);
    }

    cout << dp[0][n - 1];
    system("pause");
}