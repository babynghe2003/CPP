#include<bits/stdc++.h>
using namespace std;

int mod=20192020;
long long i,j,K;
long long csc(long long x){
   long long res;
   if(x % 2 == 0) res = ( x / 2 ) % mod * (x + 1) % mod; 
     else res = (( x + 1 ) / 2) % mod * x % mod;
     return res;
}
int main(){
   cin >> i >> j >> K ;
   long long kq;
   kq=(csc( i + K - 1) - csc(i - 1)) % mod;
   kq=kq * (csc(j + K - 1) - csc(j - 1)) % mod;
   cout<<kq;
   system("pause");
}
