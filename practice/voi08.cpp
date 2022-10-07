#include <iostream>
#include <algorithm>
using namespace std;
	int N;
	int A[100001], B[100001];
int tknp(int x){

	int d=1, c=N,g;
	if (x<=B[1]) return abs((-1*x)+B[1]);
	else if (x>=B[N]) return abs((-1*x)+B[N]);
	else
		while (d<=c){
			g=(d+c)/2;
			if (B[g]<x) d=g+1;
			else if (B[g-1]>=x) c=g-1;
			else {
				if (B[g]==x) return 0; else
				return min(abs((-1*x)+B[g]),abs((-1*x)+B[g-1]));
			//	cout << B[g];
				break;
			}
		}
}
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	int nho=2100000000,c;
	cin >> N;
	for (int i=1; i<=N; i++) cin >> A[i];
	for (int i=1; i<=N; i++) cin >> B[i];
	sort(A+1, A+N+1);
	sort(B+1, B+N+1);
	for (int i=1; i<=N; i++){
		c=-1*A[i];
		nho=min(nho, tknp(c));
		
		if (nho==0) break;
		
	}
	cout << nho;
	return 0;
}
