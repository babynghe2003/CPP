#include <bits/stdc++.h>
using namespace std;

void solve() {
    
    // int n;
    // string s;
    // cin >> s;
    // n = s.length();
    // string ans = "";
    // int i = n-1;
    // while (i>=0){
    //     if (s[i] == '0'){
    //         char c = (s[i-2]-48)*10+(s[i-1]-48)+'a'-1;
    //         ans = c + ans;
    //         i-=3;
    //     }else {
    //         char c = s[i]-48+'a'-1;
    //         ans = c + ans;
    //         i--;
    //     }
    // }
    // cout << ans << endl;
    int n;
    string s;
    cin >> s;
    n = s.length();
    string ans = "";
    int i = n-1;
    while (i>=0){
        if (s[i] == '0'){
            char c = (s[i-2] - 48)*10 + (s[i-1]-48) - 'a' - 1;
            ans = c+ ans;
            i-=3;
        }else {
            char c = s[i] - 48 - 'a' - 1;
            ans = c+ ans;
            i--;
        }
    }
    cout << ans << endl;

}
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}