#include <bits/stdc++.h>
using namespace std;
#define ll long long
void indef(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
}

ll a[3000],L[3000][3000];

void solve() {

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        L[i][i] = a[i];
        for (int j = i - 1; j >= 0; --j)
            L[j][i] = max(a[j] - L[j + 1][i], a[i] - L[j][i - 1]);
    }
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n; j++){
    //         cout << L[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << L[0][n - 1];

}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    indef();

    int t = 1;
 //   cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
