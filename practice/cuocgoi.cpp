#include<bits/stdc++.h>
using namespace std;
struct call{
    int b,e;
};
bool callgreater(call a, call b){
   return (a.b<b.b);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N, Max=1;
    cin >> N;
    call A[5500]; int L[5500];
    for (int i = 1; i <= N; i++){
        cin >> A[i].b >> A[i].e;
    }
    sort(A+1, A+N+1, callgreater);
    L[1]=1;
    // for (int i = 1; i <= N; i++){
    //     cout << A[i].b << " " <<  A[i].e << endl;
    // }
    for(int i = 2; i <= N; i++){
        L[i]=1;
        for (int j=i-1; j >=1 ;j--){
            if (A[j].e <= A[i].b) L[i]=max(L[i],L[j]+1);
            Max = max(L[i],Max);
        }
        
    }
    cout << Max;
    return 0;
}
