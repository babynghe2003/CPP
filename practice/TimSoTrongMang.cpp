#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char** argv) {
	int N, M, k;
	cin >> N >> M;
	int A[N+1];
	for (int i=1; i<=N; i++) cin >> A[i];
	sort(A+1, A+N+1);
	for (int i=1; i<=M; i++){
		cin >> k;
		int d=1, c=N, g=(d+c)/2; 
		if (k==A[1] || k==A[N]) cout << "YES";
		else
		while (d<=c){
            g=(d+c)/2;
            if (A[g]>k) c=g-1;
            else if (A[g]<k) d=g+1;
            else {
               cout << "YES"; 
                break; 
            }
        }
        if (d>c) cout << "NO";
        cout << endl; 
	}	
	return 0;
}
