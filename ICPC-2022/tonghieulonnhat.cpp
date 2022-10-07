#include <bits/stdc++.h>
using namespace std;

struct INT2
{
    int key;
    int val;
};

int main()
{

    int n;

    cin >> n;

    long long a[n + 1];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long Max = INT_MIN*3;
    long long l[n + 1], r[n + 1];

    l[0] = a[0];
    r[n - 1] = a[n - 1];

    for (int i = 1; i < n; i++)
    {
        l[i] = max(l[i - 1], a[i]);
    }
    for (int i = n - 2; i > -1; i--)
    {
        r[i] = max(r[i + 1], a[i]);
    }

    for (int i = 1; i < n - 1; i++)
    {
        Max = max(l[i - 1] - a[i] + r[i + 1], Max);
    }

    cout << Max;

    return 0;
}
