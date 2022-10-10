#include <bits/stdc++.h>
using namespace std;
#define ll long long

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}  

bool isPrime(int N){

    for (int i = 2; i*i <= N; i++){
        if (N%i == 0) return false;
    }
    return true;
}
void solve() {
    ll v1,v2;
    ll t,a;
    cin >> v1 >> v2 >> t >> a;
    if (a == 0){
        cout << v1*t;
        return;
    }
    if (v1>v2) swap(v1,v2);
    ll ans = 0;
    ll del = ((v2-v1)/a);

    // n*u1 + n*(n-1)*a/2

    ll n1 = ceil((t - del)/2.)+del; 
    ll n2 = (t-del)/2;

    ans += n1*v1 + n1*(n1-1)*a/2;
    ans += n2*v2 + n2*(n2-1)*a/2;
    
    cout << ans;
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    indef();
    
    int t = 1;
    // cin >> t;
    
    while (t--) {
        solve();
    }

    // solve();
    
    return 0;
}