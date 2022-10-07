#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    // ios_base::sync_with_stdio(0); 
    // cin.tie(0); 
    // cout.tie(0);
    long long  L, R;
    cin >> L >> R;
    vector<bool> isPrime(R+1, true); 

    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= R; ++i) {
         if(isPrime[i]) {
             for(int j = i * i; j <= R; j += i)
                 isPrime[j] = false;
        }
    }
    for (int i=L; i <= R ; i++) 
     if (isPrime[i]) cout << i << endl;
    //system("pause");
    return 0;
}
