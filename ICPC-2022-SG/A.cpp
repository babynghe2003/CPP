#include <bits/stdc++.h>
using namespace std;
#define ll long long
void indef(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
}

vector<int> minVt(vector<int> a, vector<int> b){
	for (int i = 0; i < (a.size()<b.size()?a.size():b.size());i++){
		if (a[i]<b[i]){
			return a;
		}else if (a[i]>b[i]){	
			return b;
		}
	}
	return a;
}
int cpb(vector<int> a, vector<int> b){ // a<b = -1
	for (int i = 0; i < (a.size()<b.size()?a.size():b.size());i++){
		if (a[i]<b[i]){
			return -1;
		}else if (a[i]>b[i]){	
			return 1;
		}
	}
	return 0;
}
void solve() {
	while (true){

		int t, n;
		cin >> t;
		if (t == 0) break;
		cin >> n;
		int a[n];
		int L[n];
		vector<int> Pos[n];

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		int Max = 0, MaxPos = 0;
		for (int i = 0 ; i<n; i++){
			L[i] = a[i];
			if (a[i] > t){
				L[i] = 0;
			}else{
				Pos[i].push_back(i);
			}
	
			for (int j = 0; j < i; j++){
				if (L[j] + a[i] <= t && L[j] + a[i] == L[i] ){ 
					if (cpb(Pos[i],Pos[j])>0){
						Pos[i] = Pos[j];
						if (Pos[i].size()>0 && Pos[i].back() != j)Pos[i].push_back(j);
						Pos[i].push_back(i);
					}
					
				}else if (L[j] + a[i] <= t && L[j] + a[i] > L[i] ){
					L[i] = L[j] + a[i];   
					Pos[i] = Pos[j];
					if (Pos[i].size()>0 && Pos[i].back() != j)Pos[i].push_back(j);
						Pos[i].push_back(i);
				}
			}
			if (L[i] > Max){
				Max = L[i];
			}
		}

		vector<int> Minv;
		Minv.push_back(n);

		// for (int i = 0; i < n; i++){
		// 	// if (L[i] == Max){
		// 		for (int j = 0; j < Pos[i].size();j++){
		// 			cout << a[Pos[i][j]] << " ";
		// 		}
		// 		cout << L[i] << endl;
		// 	// }
			
		// }

		for (int i = 0; i < n; i++){
			if (L[i] == Max)
			Minv = minVt(Pos[i],Minv);
		}

		for (int i = 0; i < Minv.size(); i++){
			cout << a[Minv[i]] << " ";
		}

		cout << Max << endl;

	}

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
