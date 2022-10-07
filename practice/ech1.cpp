#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int N, K, Max=1;
    cin >> N >> K;
    int A[N+1], L[N+1];
    for (int i = 1; i<= N; i++){
        cin >> A[i];
    }
    L[1]=0;
    for (int i = 2; i<= N; i++){
        L[i]=abs(A[i]-A[i-1])+L[i-1];
        for (int j=i-2; j>=i-K && j > 0; j--){
        L[i]=min(L[i],abs(A[i]-A[j])+L[j]);
        }
    }

    cout << L[N];
    return 0;
}