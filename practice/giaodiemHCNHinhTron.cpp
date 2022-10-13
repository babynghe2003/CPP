#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481117450284102701938


void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

void solve() {
    cout << fixed << setprecision(15);

    
    double x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double xI = (x1 + x2) / 2.0;
    double yI = (y1 + y2) / 2.0;
    double r;
    cin >> r;
    
    if ((x2 - xI)*(x2 - xI)+(y2-yI)*(y2-yI)<=r*r){
        cout << (x2 - x1)*(y2 - y1);
        return;
    }

    // tim phan tam giac goc thu nhat
    double w1 = min(abs(x2-xI),r);
    double h1 = min(abs(y2-yI),r);

    long double p = acos((h1)/r);
    long double s1 = sin(p)*h1*r*2.0;

    long double p2 = acos((w1)/r);
    long double s2 = sin(p2)*w1*r*2.0;

    // tim cac goc con lai
    long double goc = PI/2.0 - p - p2;
    double s3 = r * r * goc * 2.0;

    cout << (s1 + s2 + s3);
   
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    indef();
    
    int t = 1;
    // cin >> t;
    
    while (t--) {
        solve();
    }

    // solve();
    
    return 0;
}
