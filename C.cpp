#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> A(n);

    cout << (A.end()-A.begin());
    // int A[n];
    // for (int i = 0; i < n; i++){
    //     cin >> A[i];
    // }
    // sort(A,A+n);
    // for (int i = 0; i < n-2; i++){
    //     for (int j = i+1; j < n-1; j++){
    //         for (int k = j+1; k < n; k++){
    //             if (A[i]+A[j]>A[k]){
    //                 if (A[i]*A[i]+A[j]*A[j] > A[k]*A[k]) cout << A[i] << " " <<  A[j] <<  " " <<  A[k] << " nhon" << endl;
    //                 if (A[i]*A[i]+A[j]*A[j]  == A[k]*A[k]) cout << A[i] << " " <<  A[j] <<  " " <<  A[k] << " vuong" << endl;
    //                 if (A[i]*A[i]+A[j]*A[j] < A[k]*A[k]) cout << A[i] << " " <<  A[j] <<  " " <<  A[k] << " tu" << endl;
    //             }
    //         }
    //     }
        
    // }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    
    return 0;
}