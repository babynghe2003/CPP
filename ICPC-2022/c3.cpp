#include <bits/stdc++.h>
using namespace std;

int main(){

    int X,N,M;

    cin >> X >> N >> M;

    //3,15,6
    //2,4,6,8,10,12,14

    //4,12,6,
    //3,6,9,12

    //n/(lcm(X,M)/X)
    //n/(M/__gcd(X,M))
    

    cout << N/(M/__gcd(X,M));
    return 0;
}
