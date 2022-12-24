#include <bits/stdc++.h>
using namespace std;
#define ll long long
void indef(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
}
string largewto(string c){
    string s = c;
    int n = s.length();
    int reminder = 0;
    for (int i = n-1; i>0; i--){
        if (s[i] == '0'){
            s[i] = '9';
            reminder = 1;
        }else if (s[i] == '1' && reminder == 1){
            s[i] == '9';
            reminder = 1;
        }else{
            s[i] -= reminder;
            reminder = 0;
        }

    }
	 while (s[0] == '0'){
		  s.erase(s.begin());
	 }
    
    return s;
}
void solve() {
	string l;
	cin >> l;
    cout << largewto(l);

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

	return 0;
}
