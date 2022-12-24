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
	double pos(ll x, ll y){
		return a*x + b*y + c;
	}
};


void solve() {
  ll x1,y1,x2,y2,x3,y3,x4,y4;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
  Point A = Point(x1,y1);
  Point B = Point(x2,y2);
  Point A1 = Point(x3,y3);
  Point B1 = Point(x4, y4);
  Line AB = Line(A,B);
  Line CD = Line(A1, B1);

  if ((x1 < x3 && x1 < x4 && x2 < x3 && x2 < x4) ||
		 (y1 < y3 && y1 < y4 && y2 < y3 && y2 < y4) || 
		 (x1 > x3 && x1 > x4 && x2 > x3 && x2 > x4) ||
		 (y1 > y3 && y1 > y4 && y2 > y3 && y2 > y4))
	  cout << "NO";
  else
  if (AB.pos(x3,y3)*AB.pos(x4,y4) <= 0 && CD.pos(x1,y1)*CD.pos(x2,y2) <= 0) cout << "YES";
  else cout << "NO";
  cout << endl;
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
