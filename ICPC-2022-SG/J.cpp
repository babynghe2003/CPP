#include <bits/stdc++.h>
using namespace std;
#define ll long long
void indef(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
}

void solve(int cs) {
	string res = "ABCDE";
	string a[5];
	for (int i = 0; i < 5; i++){
		cin >> a[i];
	}
	
	do {
		bool ok = true;
		for (int i = 0; i < 5; i++){
			char l = a[i][0];
			char r = a[i][2];
			if (a[i][1] == '>'){
				swap(l,r);
			}
			size_t posL = res.find(l);
			size_t posR = res.find(r);
			if (posL > posR){
				ok = false;
				break;
			}
		}
		if (ok){
			cout << res << endl;
			return;
		}
	} while (next_permutation(res.begin(), res.end()));

	cout << "Case #" << cs << ": " << "impossible" << endl;

}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	indef();

	int t=1;
	//cin >> t;
	int cs = 1;
	while (t--) {
		solve(cs++);
	}

	return 0;
}
