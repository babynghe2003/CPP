#include <bits/stdc++.h>
using namespace std;
#define ll long long
void indef(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
}

void solve() {
	int m,n;
	cin >> m >> n;
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
	int count0 = 0;
	for (int i = 1; i <=m; i++){
		int countt = 0;
		for (int j = 1; j<=n; j++){ // count rectangle mxn all equal 0
			
			int ans = 0;

			int count = 0; 
			for (int l = 0; l < i; l++){ 
				countt+=a[l][j-1];
			}
			count = countt;
			if (count == 0) ans++;

			for (int k = 0; k <= m-i; k++){ // k = y1 -> y2
					
				if (k != 0){ // k == 0 is counted
					for (int p = 0; p<j; p++){
						if (a[k-1][p] == 1) count--;
						if (a[k+i-1][p] == 1) count++;
					}
					if (count == 0) ans++;

				}
				int count2 = count;

				for (int l = 1; l <= n - j; l++) // l = x1 -> x2
				{
					for (int q = k; q < k+i; q++){
						if (a[q][l-1] == 1) count--;
						if (a[q][l+j-1] == 1) count++;
					}
					if (count == 0) ans++;
				}	

				count = count2;

			}

			cout << ans << " ";

		}
		cout << endl;

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
