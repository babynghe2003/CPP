#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,c,total=0,d, K;
    cin >> N >> K;
    d=0;
    int A[100002];
    for (int i=1; i<=N; i++){
        cin >> A[i];
    }
    while (K>A[1]){
        c=*lower_bound(A+1,A+N+1,K);
        if (K>=A[N]) c=A[N];
        else if (c>K) c--;
        K-=c;
        d++;
    }
    if (d%2==0) cout << "Second";
    else cout << "First";
    // cout << *upper_bound(A+1,A+N+1,4);;
    return 0;
}