#include <bits/stdc++.h>
using namespace std;

struct point
{
    double x, y;
    point() {}
    point(double x, double y) : x(x), y(y) {}
};

struct line
{
    double a, b, c;
    line(){};
    line(double a, double b, double c) : a(a), b(b), c(c) {}
    line(point p, point q)
    {
        /*
        a*x1 + b*y1 + c = 0
        a*x2 + b*y2 + c = 0
        a*(x1-x2) + b*(y1-y2) = 0
        Cho a = y1-y2, b = -(x1-x2)
        */
        a = p.y - q.y;
        b = q.x - p.x;
        c = -a * p.x - b * p.y;
    }
};

point projection(point P, line a)
{
    /*
        a1*x+b1*y+c1 = a2*x + b2*y +c2

        a2 = a1 => k = a1/a2
        (b1-b2*k)*y + (c1-c2*k) = 0;
        y = -(c1-c2*k)/(b1-b2*k)
        x = -(b1*y+c1)/a1

        A(x0,y0)
        u(a,b)

        a(x-x0) +b(y-y0) = 0
        ax +by + (-a*x0 - b*y0) = 0
    */
    line h = line(-a.b, a.a, a.b * P.x - a.a * P.y);
    // cout << h.a << " " << h.b << " " << h.c << endl;

    // h1 a2
    double x;
    double y;

    if (a.a != 0 && a.b != 0)
    {
        double k = a.a / h.a;
        // cout << "k=" << k << endl;
        // cout << "h:" << h.a*k << " " << h.b*k << " " << h.c*k << endl;
        y = -(a.c - h.c * k) / (a.b - h.b * k);
        x = -(h.b * y + h.c) / h.a;
        // cout << "H:" << x << " " << y << endl;
    }
    else if (a.b == 0)
    {
        y = P.y;
        x = -a.a / a.c;
    }
    else
    {
        x = P.x;
        y = -a.b / a.c;
    }

    return point(x, y);
}

bool isIn(point M, point A, point B)
{
    if (M.x <= A.x && M.x >= B.x && M.y <= A.y && M.y >= B.y)
    {
        // cout << "A>B";
        return true;
    }
    else if ((M.x >= A.x && M.x <= B.x && M.y >= A.y && M.y <= B.y))
    {
        // cout << "B>A";
        return true;
    }
    return false;
}

double d(point A, point B)
{
    return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
}

int main()
{

    // point P, A, B;

    // cin >> A.x >> A.y >> B.x >> B.y >> P.x >> P.y;
    // line AB = line(A, B);

    // // cout << AB.a << " " << AB.b << " " << AB.c << endl;

    // point Q = projection(P, line(A, B));
    // // cout << Q.x << " " << Q.y << endl;ut
    // cout << fixed << setprecision(6);
    // if (isIn(Q, A, B))
    //     cout << d(P,Q);
    // else if (d(P, A) < d(P, B))
    //     cout << d(P,A);
    // else
    //     cout << d(P,B);

    point A,B,C,M;
    cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y >> M.x >> M.y;
    
    line AB = line(A,B);
    line AC = line(A,C);
    line BC = line(B,C);

    point Q = projection(M, AB);
    point R = projection(M, AC);
    point S = projection(M, BC);

    double minDistance = d(M,A);
    minDistance = min(minDistance, d(M,B));
    minDistance = min(minDistance, d(M,C));

    if (isIn(Q, A, B))
        minDistance = min(minDistance, d(M,Q));

    if (isIn(R, A, C))
        minDistance = min(minDistance, d(M,R));
        
    if (isIn(S, B, C))
        minDistance = min(minDistance, d(M,S));

    cout << fixed << setprecision(1) << minDistance;
    

    return 0;
}
