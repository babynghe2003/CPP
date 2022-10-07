#include <bits/stdc++.h>
using namespace std;

// struct point
struct Point
{
    double x, y;
    Point() {} ..
    Point(double x, double y) : x(x), y(y) {}
};

// struct triangle
struct Triangle
{
    Point p[3];
    Triangle() {}
    Triangle(Point p0, Point p1, Point p2)
    {
        p[0] = p0;
        p[1] = p1;
        p[2] = p2;
    }
};

// struct line segment (2 points)
struct Line
{
    Point p[2];
    Line() {}
    Line(Point p0, Point p1)
    {
        p[0] = p0;
        p[1] = p1;
    }
};

// return distance between point and line
double dist(Point p, Line l)
{
    double a = l.p[1].x - l.p[0].x;
    double b = l.p[1].y - l.p[0].y;
    double c = a * (l.p[0].y - p.y) - b * (l.p[0].x - p.x);
    return fabs(c) / sqrt(a * a + b * b);
}



// return distance between two points
double dist(Point p1, Point p2)
{
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

//return distance between point and triangle side
double dist(Point p, Triangle t)
{
    double d1 = dist(p, t.p[0]);
    double d2 = dist(p, t.p[1]);
    double d3 = dist(p, t.p[2]);
    double dmin = min(d1, min(d2, d3));
    return dmin;
}

// return distance between point and side of triangle


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    Point A,B,C,M;
    // cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y >> M.x >> M.y;

    cout << fixed << setprecision(10);
    Triangle t(A,B,C);
    double d = dist(M,t);
    cout << dist(Point(2,0),Line(Point(0,2),Point(3,0))) << endl;
return 0;
}
