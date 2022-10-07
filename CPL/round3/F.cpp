
#include <bits/stdc++.h>
using namespace std;
const long long M=1e9+7;
long long L[100005],A[100005];
void solve() {
    int n,k;
    cin >> n >> k;
    int i = 0;
    while (k--) {
        cin >> i;
        A[i]=-1;
    }
    L[1]=1;
    if (A[2]!=-1) L[2]=1;
    for (int i=3;i<=n;i++)
        if (A[i]!=-1) L[i]=(L[i-1]+L[i-2]) % 14062008;
    cout << L[n] % 14062008;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t=1;
    // cin >> t;
    
    while (t--) {
        solve();
    }

    // solve();
    
    return 0;
}