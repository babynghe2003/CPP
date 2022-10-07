#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    for (int q= 1; q<=T; q++){
        int N, K;
        cin >> N >> K;
        if (K<N) cout << K << endl;
        else if (K==N) cout << N+1 << endl;
        else {
        int C=K;
        if (C%(N-1)==0)  cout << ((C/(N-1))*N)+(C%(N-1))-1 << endl;
        else
        cout << ((C/(N-1))*N)+(C%(N-1)) << endl;
        }

    }
    system("pause");
    return 0;
}