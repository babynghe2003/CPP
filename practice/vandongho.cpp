#include <bits/stdc++.h>
using namespace std;

long long R(int h1, int m1, int h2, int m2)
{
    int sogio;

    if (h1 <= h2)
        sogio = h2 - h1;
    else
        sogio = h2 + (12 - h1);

    int sophut;

    if (m1 <= m2)
        sophut = m2 - m1;
    else
        sophut = m2 + (60 - m1);

    return sogio * 60 + sophut;
}

long long L(int h1, int m1, int h2, int m2)
{

    int sogio;

    if (h2 <= h1)
        sogio = h1 - h2;
    else
        sogio = 12 - (h2 - h1);

    int sophut;

    if (m2 <= m1)
        sophut = m1 - m2;
    else
        sophut = 60 - (m2 - m1);

    return sogio * 60 - sophut;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int h1, m1, h2, m2;

    cin >> h1 >> m1 >> h2 >> m2;

    if (L(h1, m1, h2, m2) > R(h1, m1, h2, m2))
        cout << "R";
    else if (L(h1, m1, h2, m2) < R(h1, m1, h2, m2))
        cout << "L";
    else
        cout << "dochiramoiidesu";


    return 0;
}