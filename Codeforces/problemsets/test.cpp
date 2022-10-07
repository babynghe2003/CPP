#include <bits/stdc++.h>
using namespace std;
 
int countEl(long long a){
    string s = to_string(a);
    return s.length();
}
 
void solve() {
    int n;
    cin >> n;
    long long A[n],B[n];
    bool L[n][2];
    int ans = 0;
    for (int i = 0; i < n; i++){
        cin >> A[i];
        L[i][0] = true;
        L[i][1] = true;
    }
    int d = 0;
 
    for (int i = 0; i < n; i++){
        cin >> B[i];
        for (int j = 0; j<n; j++){
            if (B[i] == A[j] && L[j][0]){
                L[j][0]=false;
                L[i][1]=false;
                d++;
                break;
            } 
        }
    }
    for (int i = 0; i <n ; i++){
        if (A[i]>9 && L[i][0]){
            A[i]=countEl(A[i]);
            ans++;
        }
        if (B[i]>9 && L[i][1]){
            B[i]=countEl(B[i]);
            ans++;
        }
    }
    cout << d << endl;

    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            if (B[j] == A[i] && L[j][1]&& L[i][0]){
                L[i][0]=false;
                L[j][1]=false;
                d++;
                break;
            } 
        }
    }
    int p = 0;
    for (int i = 0; i<n; i++){
        if ((A[i] == 1 && L[i][0])) p++;  
        if ((B[i] == 1 && L[i][1])) p++;  
    }
    cout << ans+(n-d)*2-p <<  endl;
    cout << "variable:" <<  ans << " " << d << " " << p << endl;

}
 
int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}