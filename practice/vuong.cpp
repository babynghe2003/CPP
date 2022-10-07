#include <bits/stdc++.h>
using namespace std;
struct diem
{
    long long a,b,c,d;
    /* data */
};


double kc(long long x1, long long y1, long long x2, long long y2){
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}
bool vuong(long long x1, long long y1, long long x2, long long y2, long long x3, long long y3, long long x4, long long y4){
    double a1 = kc(x1,y1,x2,y2);
    double a2 = kc(x3,y3,x4,y4);
    double a3 = kc(x1,y1,x3,y3);
    double a4 = kc(x2,y2,x4,y4);
    double b1 = kc(x1,y1,x4,y4);
    double b2 = kc(x2,y2,x3,y3);
    if (a1 != a2 || a2 != a3 || a3 != a4 || a4 != a1 || b1 != b2) return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long N;
    cin >> N;
    diem A[N+1];
    for (long long i=1; i<=N; i++){
        cin >> A[i].a >> A[i].b >> A[i].c >> A[i].d;
    }
    // cout << kc(1,1,0,0);
    for (long long i=1; i<N; i++){
        for (long long j = i+1; j<=N; j++){
            if (vuong(A[i].a,A[i].b,A[i].c,A[i].d,A[j].a,A[j].b,A[j].c,A[j].d) == true){
                 cout << "YES";
                //  system("pause");
                 return 0;
        }
        }
    }
    cout << "NO";
    // system("pause");
    return 0;
}