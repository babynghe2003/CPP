#include<bits/stdc++.h>
using namespace std;
struct call{
    int b,e,v;
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
        cin >> A[i].b >> A[i].e >> A[i].v;
    }
    sort(A+1, A+N+1, callgreater);
    L[1]=A[1].v;
    Max = max(L[1],Max);
    // for (int i = 1; i <= N; i++){
    //     cout << A[i].b << " " <<  A[i].e << endl;
    // }
    for(int i = 2; i <= N; i++){
        L[i]=A[i].v;
        for (int j=i-1; j >=1 ;j--){
            if (A[j].e <= A[i].b ) L[i]=max(L[i],L[j]+A[i].v);
            Max = max(L[i],Max);
        }
        
    }
    cout << Max;
    return 0;
}
