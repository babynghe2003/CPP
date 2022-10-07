#include <bits/stdc++.h>
using namespace std;
struct Congnhan
{
    long long sl = 0;
    long long br = 0;
};

int main()
{
    int N;
    long long M, SL = 0;
    cin >> N >> M;
    Congnhan A[105];
    long long S, Maxbr = 0, D = 0, Con = 0, songay;

    for (int i = 1; i <= N; i++)
    {
        cin >> A[i].sl >> A[i].br;
        Maxbr = max(Maxbr, A[i].br);
        S += A[i].sl;
    }

    for (int i = 1; i <= N; i++)
    {   
        S=0;
        songay = (Maxbr+1)/(A[i].br+1);
        S += songay * A[i].br * A[i].sl;
        S += ((Maxbr + 1) - (A[i].br + 1) * songay) * A[i].sl;
        SL+=S;
    }
    D = M / SL * (Maxbr + 1);
    S = (M/SL)*SL;

    for (int i = 1; i <= Maxbr + 1; i++)
    {
        if (S >= M)
        {
            cout << D;
            return 0;
        }
        SL = 0;
        for (int j = 1; j <= N; j++)
        {
            if (i % (A[j].br + 1) != 0)
            {
                SL += A[j].sl;
            }
        }
        S += SL;
        D++;
    }

    return 0;
}