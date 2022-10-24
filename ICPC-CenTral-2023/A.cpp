#include <bits/stdc++.h>
using namespace std;
#define ll long long
void indef(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
}

struct Rank{
    int a,b;
    bool operator<(const Rank &r) const{
        return a < r.a && b < r.b;
    }
};


void solve() {
    int n, k;
    cin >> n >> k;
    Rank A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i].a >> A[i].b;
    }
    sort(A, A + n);
    map<int, int> m;
    int i = 0;
    int rk = 1;
    while (i < n - 1) {
        m[rk] = 1;
        while (i < n - 1 && !(A[i]<A[i+1])) {
            m[rk]++;
            i++;
        }
        rk++;
        i++;
    }
    for (auto const &[key, val] : m) {
        cout << key << " " << val << endl;
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    indef();

    int t = 1;
  //  cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
