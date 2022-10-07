#include <iostream>
using namespace std;


int main(int argc, char** argv) {
	int n,m,k;
	cin >> n >> m >> k;
	int A[100010];
	for (int i=1; i<n*m; i++) A[i]=0;
	for (int i=1;i<=n;i++)
		for (int j=1; j<=m; j++){
			A[i*j]++;
		}
	int d=0;
	while (k>0){
		d++;
		k-=A[d];
		
	} 
	cout << d;
	return 0;
}
