#include <bits/stdc++.h>
using namespace std;
int L[50002][22];
int main()
 {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);
    int N,S;
    cin >> N;

    if (N==2) S=1;
    else if (N%3==0)  S=(N/3)*7;
    else if (N%3==1) S=(N/3-1)*7+4;
    else if (N%3==2) S=(N/3)*7+1;

 
    
    cout << S;
    // system("pause");
    return 0;
}