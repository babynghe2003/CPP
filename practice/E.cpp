#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool SNT(10) = {false, false, true, true, false , true, false, true, false, false}

void sieve(int N) {
    bool isPrime[N+1];
    for(int i = 0; i <= N;++i) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= N; ++i) {
         if(isPrime[i] == true) {
             // Mark all the multiples of i as composite numbers
             for(int j = i * i; j <= N; j += i)
                 isPrime[j] = false;
        }
    }
}

bool spc(ll n){
    ll C=n;
    while (C>0){
        if (!isPrime[C])(C%10)) return false;
        C/=10;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve(128);
    ll N, d, S=0, spt=1;
    cin >> N;
    while 
    return 0;
}