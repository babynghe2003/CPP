#include <bits/stdc++.h>
using namespace std;
long long n,mod;
int giaiThua(int n)
{
    long long giai_thua = 1;
    for (int i = 1; i <= n; i++)
        giai_thua = ((giai_thua%mod) *(i%mod))% mod;
    return giai_thua;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string S;
    
    cin >> S;
    cin >> mod;

    while (S[0]=='0'){
        S.erase(0,1);
    }

    int dem0 = 0;
    for (int i = 0; i < S.size(); i++){
        if(S[i]=='0'){
            dem0 ++;
        }
    }
    // long long res = giaiThua(S.size())*(S.size()-dem0)/S.size();
    // cout << res%mod;
    cout << giaiThua(S.size());
    return 0;
}