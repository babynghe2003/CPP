#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if (a*b==0) return a+b;
    else{
        if (a>b) return gcd(a%b,b);
        else return gcd(b%a, a);
    } 
}

int main(){
    cout << "Nhap a va b:";
    int a,b;
    cin >> a >> b;

    cout << "GCD of a and b:" << gcd(a,b) << endl;
    cout << "LCM of a and b:" << (a*b)/gcd(a,b);

    return 0;
}