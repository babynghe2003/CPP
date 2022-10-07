#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   cin >> n;
   int A[n+1];
   for (int i = 1; i<=n ; i++){
    A[i] = i;
   }
   if (n%3 == 2){
    for (int i = 1; i<=n; i++){
        cout << i << " ";
    }
   }else if (n%3 == 1){
    if (n == 1){
        cout << 1;
    }else{
        swap(A[1],A[n-2]);
        for (int i = 1; i<=n; i++){
            cout << A[i] << " ";
        }
    }
   }else{
    if (n == 3){
        cout << "2 1 3";
    }else{
        for (int i = 2; i<=n-3; i++){
            cout << A[i] << " ";
        }
        cout << n-1 <<  " 1 " << n-2 << " " << n;
    }
   }
   cout << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }

    // solve();
    
    return 0;
}