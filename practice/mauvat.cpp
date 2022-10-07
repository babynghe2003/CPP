#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int N, M, K;
bool kiemtra (string x, string y){
	int d1=0;
	for (int r=0; r < M; r++){
		if (x[r] != y[r]) d1++; 
	}
	if (d1==K) return true;
	else return false;
}
int main(int argc, char** argv) {
	int  d=0;
	cin >> N >> M >> K;
	string A[N+1];
	for (int i=1; i<=N; i++){
		cin >> A[i];
	}
	for (int i=1; i<N; i++){
		for (int j=i+1; j<=N; j++){
			if (kiemtra(A[i],A[j]) == true)
			d++;
		}
	}
	cout << d; 
	return 0;
}	
