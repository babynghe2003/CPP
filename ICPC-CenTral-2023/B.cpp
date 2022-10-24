#include <bits/stdc++.h>
using namespace std;
#define ll long long
void indef(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
}
int L[2000005];

void solve() {
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        L[c]++;
    }
    // count triplets with sum divisible by 5
    ll cou = 0;
    for (int i = 5; i < 6000005; i+=5){
        
    }
    int count = 0;
    
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
