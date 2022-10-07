#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    long n;
    cin >> n;
    bool kt=true;
    if (n == 2 || n == 3)
         kt = true;
    else if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        kt = false;
    else
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            kt=false;
    }
    if (kt) cout << "YES";
    else cout << "NO";
    system("pause");
    return 0;
}
