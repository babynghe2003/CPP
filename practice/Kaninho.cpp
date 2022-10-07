#include<bits/stdc++.h>
using namespace std;
struct Kinghi
{
    int a,b,c;
};
int main(){
    int N, K, Max=1;
    cin >> N;
    Kinghi A[N+1], L[N+1];
    for (int i = 1; i<= N; i++){
        cin >> A[i].a >> A[i].b >> A[i].c;
    }
    L[1].a=A[1].a; L[1].b=A[1].b; L[1].c=A[1].c;
    for (int i = 2; i<= N; i++){
        L[i].a=max(A[i].a+L[i-1].b,A[i].a+L[i-1].c);
        L[i].b=max(A[i].b+L[i-1].a,A[i].b+L[i-1].c); 
        L[i].c=max(A[i].c+L[i-1].b,A[i].c+L[i-1].a);
    }
    
    cout << max(L[N].a,max(L[N].b,L[N].c));
    system("pause");
    return 0;
}