#include <bits/stdc++.h>
using namespace std;
const int M = 3e6;
int a[M + 1] = {}; 
int main()
{
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        a[x]++;
    }

    for (int i = M; i >= 1; --i)
    {
        long long f = 0;
        for (int j = i; j <= M; j += i)
            f += a[j];

        if (f >= n - k)
        {
            cout << i;
             system("pause");
            return 0;
        }
    }
    system("pause");
    return 0;
}