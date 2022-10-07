#include <iostream>
#include <algorithm>

using namespace std; 
long N,d;
int A[6000];

int tkcuoi(int x, int y){
	int d=y+1, c=N, g=(d+c)/2; 
	if (x<=A[d]) return y; 
	else 
	if (x>A[c]) return c;
	else
	while (d<=c){
            g=(d+c)/2;
            if (A[g]>=x) c=g-1;
            else if (A[g+1]<x && A[g+1]>=A[g]) d=g+1;
            else {
               return g; 
                break; 
            }
        }
} 
int main(int argc, char** argv) {
	ios_base::sync_with_stdio(0);
	cin >> N;
	for (int i=1; i<=N; i++){
		cin >> A[i];
	}
	sort(A, A+N+1);
	for (int i=1; i<N-1; i++){
		for (int j=i+1;j<N;j++){
			d+=tkcuoi(A[i]+A[j],j)-j;
		}
	}
	cout << d; 
	return 0;
}
