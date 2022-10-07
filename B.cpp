#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll multiply_modulo(ll A, ll B, ll M)
{
    if (B == 0)
        return 0;

    ll T = multiply_modulo(A, B / 2, M) % M;

    if (B & 1)
        return ((T + T) % M + A % M) % M;
    else
        return (T + T) % M;
}

void solve() {
	ll n,m;
	string s = "";
	cin >> n >> m;
	for (int i = 0; i<n; i++){
		char c;
		cin >> c;
		s+=c;
	}
	string k;
	cin >> k;
	string temp = s;
	while(s.size()<=k.size()){
		s=s+temp;
	}

	for (int i = 0; i<k.size(); i++){
		s+=s[i];
	}

	int i = 0;
	std::size_t found;
	long long res = 1;
	while (i<n){
		found = s.find(k,i);
		if (found!=std::string::npos && found<n){
			// std::cout << "first 'needle' found at: " << found+1 << '\n';
			res = multiply_modulo(res,found+1,m);
			i=found+1;
		}else{
			break;
		}
	}
	cout << res;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // indef();
    
    int t = 1;
    // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
// 1<<n = 2^n