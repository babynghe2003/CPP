#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
	int N,M,S=0;
	cin >> N >> M;
	int A[N+1];
	for (int i=1; i<=N; i++){
		cin >> A[i];
		S+=A[i]; 
	} 
	sort(A+1, A+N+1);
	cout << S-min(M,A[N])+1;
	return 0;
}
