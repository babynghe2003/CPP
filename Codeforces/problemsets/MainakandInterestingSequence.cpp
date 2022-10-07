#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> b >> a;
    if ((a % 2 !=0 && b % 2 == 0) || (a < b)){
        cout << "NO";
    }else if (b % 2 != 0){
        cout << "Yes" << endl;
        for (int i = 1; i < b; i++){
            cout << 1 << " ";
        }
        cout << a-b+1;
    }else if (b%2 == 0 ){
        cout << "Yes" << endl;
        for (int i = 1; i < b-1; i++){
            cout << 1 << " ";
        }
        cout << (a - (b-2))/2 << " " << (a - (b-2))/2;
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