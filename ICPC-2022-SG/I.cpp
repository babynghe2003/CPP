#include<bits/stdc++.h>
using namespace std;
#define ll long long
void indef(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
}

void solve() {
	bool isLane = false;
	for (int i = 1; i <=3 ; i++){
		for (int j = 0; j < 10; j++){
			char c;
			cin >> c;
			if (c == '='){
				isLane = true;
			}
			if (isLane && c != '.' && c != '='){
				cout << c << endl;
				return;
			}
		}
		if (isLane){
			break;
		}
	}
	cout << "You shall pass!!!" << endl;

}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	indef();

	int t = 1;
	//cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}
