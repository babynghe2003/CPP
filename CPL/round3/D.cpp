

#include <bits/stdc++.h>
using namespace std;

struct Point
{
    long long x;
    long long y;
    Point() {}
    Point(long long x, long long y) : x(x), y(y) {}
};

long long area(Point l1, Point r1){
    long long ans = (r1.x - l1.x)*(r1.y-l1.y);
    return ans;
}

long long perimeter(Point l1, Point r1){
    long long ans = ((r1.x - l1.x)+(r1.y-l1.y))*2;
    return ans;
}

long long overlapArea(Point l1, Point r1,
                    Point l2, Point r2)
{   
    long long x_dist = min(r1.x, r2.x) - max(l1.x, l2.x);
    long long y_dist = (min(r1.y, r2.y) - max(l1.y, l2.y));
    long long areaI = 0;
    if( x_dist > 0 && y_dist > 0 )
    {
        areaI = x_dist * y_dist;
    }
     
    return areaI;
}

long long overlapPerimeter(Point l1, Point r1,
                    Point l2, Point r2)
{   
    long long x_dist = min(r1.x, r2.x) - max(l1.x, l2.x);
    long long y_dist = (min(r1.y, r2.y) - max(l1.y, l2.y));
    long long peri = 0;
    if( x_dist > 0 && y_dist > 0 )
    {
        peri = (x_dist + y_dist)*2;
    }
     
    return peri;
}


void solve() {
    long long n,t;
    cin >> n >> t;

    Point A[n][2];
    long long S = 0, P = 0;
    for (int i = 0; i<n; i++){
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        A[i][0] = Point(x1,y1);
        A[i][1] = Point(x2,y2);
        S+=area(A[i][0],A[i][1]);
        P+=perimeter(A[i][0],A[i][1]);
    }
        for (int i = 0; i < n-1; i++){
            for (int j = i+1; j < n; j++){
                S-=overlapArea(A[i][0],A[i][1], A[j][0], A[j][1]);
                P-=overlapPerimeter(A[i][0],A[i][1], A[j][0], A[j][1]);
            }
        }
    if (t == 1){
        cout << S;
    }
    else {
        cout << S << endl;
        cout << P;
    }
    
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int aa = 1000;
    int t = 1;
    // cin >> t;
    
    while (t--) {
        solve();
    }

    // solve();
    
    return 0;
}