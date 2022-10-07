
#include<bits/stdc++.h>
using namespace std;
int main(){
    int N, Max=1, d=0;;
    cin >> N;
    int B[N+1], L[N+1];
    vector <int> A;
    for (int i = 1; i <= N; i++)
    {
        cin >> B[i];
    }
    int e=1,r=1;
    while (e<N){
        r=e;
		while (B[e]==B[r]){
			r++;
		}
		A.push_back(B[e]);
        d++;
		e=r;
	}
    if (B[N]!=B[N-1]){ A.push_back(B[N]); d++;}
    // for (int i = 0; i< d; i++){
    //     cout << A[i] << endl;
    // }
    L[0]=1;
    for (int i = 1; i< d; i++){
        L[i]=1;
        for (int j = i-1; j>=0; j--){
            if (A[i]>A[j] && L[j]+1>L[i]){
                L[i]=L[j]+1;
                Max=max(Max,L[i]);
            }

        }
    }
    cout << Max;
    system("pause");
    return 0;
}
