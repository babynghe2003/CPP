#include <bits/stdc++.h>
using namespace std;
#define ll long long
void indef(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
}

void solve() {
    int n,k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    while (k--){
        int l,r;
        cin >> l >> r;
        priority_queue<int> q;
        for (int i = l; i<=r; i++){
            q.push(a[i]);
        }
        int i = 0;
        while(i<(l-r+2)/2){
            q.pop();
            i++;
        }
        cout << q.top() << endl;
    }

}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    indef();

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
