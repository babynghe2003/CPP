#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
	long N, M, k;
	cin >> N >> M;
	int A[N+100];
	for (int i=1; i<=N; i++) cin >> A[i];
	sort(A+1, A+N+1);
	long dem=0;
	for (int i=1; i<N; i++){
		if (A[i]<M){
		k=M-A[i]; 
		int d=i+1, c=N, g=(d+c)/2; 
		while (d<=c){
            g=(d+c)/2;
            if (A[g]>k) c=g-1;
            else if (A[g]<k) d=g+1;
            else {
        		dem++;
            	int l=g+1, p=g-1;
               	while (A[l]==A[g] || A[p]==A[g]){
            		if (A[l]!=A[g] || A[p]!=A[g]) dem++;
            		else dem+=2;
            		l++;
            		p--;
				}
              
                break; 
            }
        	}
		}
   	}	cout << dem; 
	return 0;
}
