#include <bits/stdc++.h>
using namespace std;
#define ll long long
void indef(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	indef();

	while (1){
		int t, n;
		cin >> t;
		if (t == 0) break;
		cin >> n;
		int a[n];
		int L[n];
		int Pos[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		int Max = 0, MaxPos = 0;
		for (int i = 0 ; i<n; i++){
			L[i] = a[i];
			Pos[i] = i;
			for (int j = 0; j < i; i++){
				if (L[j] + a[i] <= t && L[j] + a[i] > L[i]){
					L[i] = L[j] + a[i];
					Pos[i] = j;
				}
			}
			if (L[i] > Max){
				Max = L[i];
				MaxPos = i;
			}
		}
		vector<int> ans;
		while (MaxPos != Pos[MaxPos]){
			ans.push_back(a[MaxPos]);
			MaxPos = Pos[MaxPos];
		}
		ans.push_back(a[MaxPos]);
		cout << ans.size() << endl;
		for (int i = ans.size() - 1; i >= 0; i--){
			cout << ans[i] << " ";
		}
        cout << endl;

	}

	return 0;
}
