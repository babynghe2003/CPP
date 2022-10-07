#include <iostream>
#include <algorithm>
using namespace std; 
int N, K;
int A[1000100];
int chatnp(int x,int y){
	long d=y, c=N, g=(d+c)/2; 
	if (x>=A[c]) return c;
	else{
	while (d<=c && d>=y && c>=y){
            g=(d+c)/2;
            if (A[g]>x) c=g-1;
            else if (A[g+1]<=x && A[g+1]>=A[g]) d=g+1;
            else {
               return g; 
                break; 
            }
        }
    }
} 
int main(int argc, char** argv) {
	cin >> N >> K;
	for (int i=1; i<=N; i++){
		cin >> A[i];
	}
	sort(A, A+N+1);
//	for (int i=1; i<=N; i++){
//		cout << A[i] << endl;
//	}
	long dem=0; 
	for (int i=1;i<N;i++){
		
	  	if (A[i]+A[i+1]<=K && A[i]<K) dem+=(chatnp(K-A[i],i+1)-i); 
	} 
	cout << dem;
	return 0;
}
