#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    int d = 0;
    vector<array<int,2>> ans;
    if (n>1 && (A[0]+A[n-1])%2==0){
        ans.push_back({1,n});
        A[0]=A[n-1];
    }
    for (int i = 1; i < n; i++){
        if ((A[0]+A[i])%2 == 1){
            ans.push_back({1,i+1});
            A[i] = A[0];
        }
    }
    for (int i = 0; i< n-1 ; i++ ){
        if ((A[i]!=A[n-1])){
            ans.push_back({i+1, n});
            A[i] = A[n-1];
        }
    }
    cout << ans.size() << endl;
    for (auto [l,r]:ans){
        cout << l << " " << r << endl;
    }
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