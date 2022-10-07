#include <iostream>
#include <algorithm>

using namespace std;
int N, K, c;
int A[100010];
int chatnp(int x){
	int d=1, c=N, g=(d+c)/2; 
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
	
	cin >> N; 
	
	for (int i=1; i<=N; i++){
		cin >> A[i]; 
	} 
	sort(A, A+N+1);
	cin >> K;
	for (int i=1; i<=K; i++){
		c=0;
		cin >> c;
		cout << chatnp(c) << endl;
	} 
	return 0;
}

