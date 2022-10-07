#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n,d;
    cin >> n >> d;
    int A[n];
    deque<int> b;
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    long long ans = 0;
    sort(A,A+n);
    for (int i = 0; i < n ; i++){
        b.push_front(A[i]);
    }
    while(!b.empty()){
        long long x = b.front();
        if (x*b.size()<=d){
            break;
        }else{
            ans++;
            int c = d/x;
            b.pop_front();
            for (int i = 0; i<c; i++){
                b.pop_back();
            } 
        }
        
    }
    cout << ans;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // int t;
    // cin >> t;
    
    // while (t--) {
    //     solve();
    // }

    solve();
    
    return 0;
}