#include <bits/stdc++.h>
using namespace std;
int tongcs( int x){
    int c=x, dem=0;
        while (c>=1){
            dem+=c % 10;
            c/=10;
        }
    return dem;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int a, b, N, Max=0;
    cin >> a >> b;
    N= __gcd(a,b);
    int dem = 0;
    
    for (int i=1; i*i<=N; i++){
        if (a % i == 0 && b % i == 0 ){
        Max= max(tongcs(i), Max);
        Max= max(tongcs(N/i), Max);
        }
    }
    cout << Max;
    system("pause");
    return 0;
}