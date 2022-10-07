#include <bits/stdc++.h>
using namespace std;

string mh(string s){
    int i = 0;
    string ans = "";
    while(i<s.size()){
        char c = s[i];
        int d = 1;
        while (s[i] == s[i+1]){
            d++;
            i++;
        }
        ans += to_string(d)+c;
        i++;
        // cout << d << " " << c << endl;
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    while (n--){
        s = mh(s);
    }
    cout << s;
   
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    // cin >> t;
    
    while (t--) {
        solve();
    }

    // solve();
    
    return 0;
}