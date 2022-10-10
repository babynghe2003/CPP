#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 1010
#define MOD 1000000007

void indef()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

ll multiply_modulo(ll A, ll B, ll M)
{
    if (B == 0)
        return 0;

    ll T = multiply_modulo(A, B / 2, M) % M;

    if (B & 1)
        return ((T + T) % M + A % M) % M;
    else
        return (T + T) % M;
}

void solve()
{
    ll L[1010][1010];
    L[0][0] = 1;
    for (int i = 1; i < MAXN; i++)
    {
        L[i][0] = 1;
        for (int j = 1; j <= i; j++)
        {
            L[i][j] = (L[i - 1][j] + L[i - 1][j - 1]) % MOD;
            cout << L[i][j] << " ";
        }
        cout << endl;
    }

    int K;
    cin >> K;
    int A[K];
    for (int i = 0; i < K; i++)
        cin >> A[i];

    long res = 1;
    int total = 0;
    for (int i = 0; i < K; i++)
    {
        res = (res * L[total + A[i] - 1][A[i] - 1]) % MOD;
        total += A[i];
    }

    cout << res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    indef();

    int t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
