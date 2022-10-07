#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T, L;
    cin >> T;
    int A[T+1];
    for (int i=1; i<=T ; i++){
        cin >>A[i];
        if (i==1) L=A[1];
        else L= __gcd(L, A[i]); 
        if (L == 1){
            cout << "-1";
            break;
        }
    }
    if (L!=1){
    sort(A+1,A+T+1);
    for (int i=2; i<=L; i++){
        if (L % i == 0){
            cout << i;
            break;
        }
    }
    
    }
    system("pause");
    return 0;
}