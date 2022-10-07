#include <bits/stdc++.h>
using namespace std;
 
int countEl(long long a){
    return to_string(a).length();
}
 
void solve() {
    int n;
    cin >> n;
    int ans = 0;
    priority_queue<int> a,b;
    for (int i = 0; i <n; i++){
        int c;
        cin >> c;
        a.push(c);
    }
    for (int i = 0; i <n; i++){
        int c;
        cin >> c;
        b.push(c);
    }

    while (!a.empty()){
        int x = a.top();
        int y = b.top();
        if (x>y){
            a.pop();
            a.push(countEl(x));
            ans++;
        }else if (x<y){
            b.pop();
            b.push(countEl(y));
            ans++;
        }else{
            a.pop();
            b.pop();
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
