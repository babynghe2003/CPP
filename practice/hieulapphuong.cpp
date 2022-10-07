#include <bits/stdc++.h>
using namespace std;
int mod=1000000007;
bool snt(long long x){
    for(long long i = 2; i <= sqrt(x); i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}
int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    for (int q= 1; q <= T ; q++){
        long long N;
        cin >> N;
        long long c = N-1;
        if (snt((N*N*N)-(c*c*c))==true && N!=1) cout << 1 << endl;
        else cout << 0 << endl;
    }
    system("pause");
    return 0;
}