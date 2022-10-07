#include<bits/stdc++.h>
using namespace std;
double L[3001][3001];
int main()
{
    cout.precision(9);
    int N;
    cin>>N;
    double S;
    L[0][0]=1;
    for(int i=1;i<=N;i++)
    {
        cin>>S;
        for(int j=0;j<=i;j++)
            L[i][j]=L[i-1][j-1]*S+L[i-1][j]*(1-S);
    }
    S=0;
    // for(int i=1;i<=N;i++)
    // {
    //     for(int j=0;j<=i;j++)
    //         cout << L[i][j] << " ";
    //     cout << endl;
    // }
    for(int i=n/2+1;i<=N;i++) 
    S+=L[n][i];
    cout<<S;
    return 0;
}