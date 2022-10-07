#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
	int N;
	cin >> N;
	int A[N+1];
	for (int i=1; i<=N; i++){
	 cin >> A[i];
	}
	int k, dem=0, m=-1000000000;
	sort(A+1, A+N+1);
	for (int i=1; i<N; i++)
		for (int j=i+1; j<=N; j++)
			if ((A[i]+A[j])%2==0){
				k=(A[i]+A[j])/2;
				int d=1, c=N, g;
				while (d<=c){
					g=(d+c)/2;
					if (A[g]>k) c=g-1;
					else if (A[g]<k) d=g+1;
					else if (A[g]!=A[i] && A[g]!=A[j]){
						dem++;
						if (m<A[i]+A[j]+A[g]) m=A[i]+A[j]+A[g];
						break;
					}
				}
			}
		
	
	cout << dem << endl << m;
	return 0;
}
