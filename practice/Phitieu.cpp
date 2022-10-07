#include<bits/stdc++.h>
using namespace std;
int main(){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);
    int N, Max=1;
    cin >> N;
    long long A[N+1+3], L[N+1+3];
    for (int i = 1; i<= N; i++){
        cin >> A[i];
    }
    L[0]=0;
    L[1]=A[1]; L[2]=A[1]+A[2]; L[3]=max(A[1]+A[3],A[2]+A[3]);
    for (int i = 4; i<= N; i++){
        L[i]=max(A[i]+A[i-1]+L[i-3],max(A[i]+L[i-2],A[i]+A[i-1]+L[i-4]));
    }
    // for (int i = 1; i<=N; i++){
    //     cout << L[i] << " ";
    // }
    cout << max(L[N],max(L[N-1],L[N-2]));
    system("pause");
    return 0;
}