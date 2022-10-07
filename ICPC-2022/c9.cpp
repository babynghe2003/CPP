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

    INT2 a[n + 1];

    for (int i = 0; i < n; i++)
    {
        a[i].key = i;
        cin >> a[i].val;
    }

    sort(a, a + n, [&](INT2 x, INT2 y)
         { return x.val < y.val; });

    // if (a[0].val * a[1].val * a[n - 1].val > a[n - 1].val * a[n - 2].val * a[n - 3].val)
    // cout << a[0].key << " " << a[1].key << " " << a[n - 1].key;
    // else 
    // cout << a[n - 1].key << " " << a[n - 2].key << " " << a[n - 3].key;
    cout << max(a[0].val * a[1].val * a[n - 1].val , a[n - 1].val * a[n - 2].val * a[n - 3].val);
    return 0;
}
