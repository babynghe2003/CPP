#include<bits/stdc++.h>
using namespace std;

int q;
int main()
{
	ios::sync_with_stdio(false);
	cin >> q;
	while (q--){
		int n;
		cin >> n;
		int a[n+1];
		for(int i = 0; i<n; i++){
			cin >> a[i];
		}
		int max = a[n-1] - a[0];
		for(int i = 0; i<n; i++){
			if (a[n-1]-a[i]>max){
				max = a[n-1]-a[i];
			}
			
			if (a[i]-a[0]>max){
				max = a[i]-a[0];
			}
			if (i<n-1)
				if (a[i]-a[i+1]>max){
					max = a[i]-a[i+1];
				}
		}
		cout << max << endl;
	}
	
	return 0;
}
