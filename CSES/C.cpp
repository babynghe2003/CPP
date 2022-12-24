#include <bits/stdc++.h>
using namespace std;
#define ll long long
void indef(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
}
struct Point{
    ll x,y;
	 Point(){}
    Point(ll x, ll y): x(x), y(y){}
};

struct Line{
	double a,b,c;
	Line(){}
	Line(Point A, Point B){
		// a*x1 + b*y1 + c = 0
		// a*x2 + b*y2 + c = 0
		// a(x1-x2) + b(y1- y2) = 0
		// a = y1 - y2
		// b = -x1 + x2
		a = A.y - B.y;
		b = -A.x + B.x;
		c = - (a*A.x + b*A.y);
	}
	double pos(Point A){
		return a*A.x + b*A.y + c;
	}
};


void solve() {
	int n, m;
	cin >> n >> m;

	vector<Point> v(n);
	for (int i = 0; i < n; i++){
		ll x,y;
		cin >> x >> y;
		v[i] = Point(x,y);
	}

	while (m--){
		
	}
	cout << n;

}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	indef();

	int t;
	cin >> t;

	while (t--) {
		solve();
	}

	return 0;
}
