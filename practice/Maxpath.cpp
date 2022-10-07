#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N, M ;
    int L[103][103], A[103][103];
    int Max=-1e9;
    // N hang M cot 
    cin >> N >> M;
    // Nhap du lieu
    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= M; j++){
            cin >> A[i][j];
        }
    }
    // khoi tao cot dau tien
    for (int i = 1; i <=N ; i++){
        L[i][1]=A[i][1];
    }
    for (int j = 0; j <= M; j++){
        L[0][j]=L[N+1][j]=-1e9;
    }
    // quy hoach dong
    for (int j = 2; j <= M; j++){
        for (int i = 1; i <= N ; i++){
            L[i][j]= max(L[i][j - 1], max(L[i - 1][j - 1], L[i + 1][j - 1])) + A[i][j]; // L[i][j] se lay ket qua tu 3 o ngay truoc no
        }
    }
    for (int i=1; i<= N; i++){
            Max= max(Max, L[i][M]);
    }
    cout << Max;
    return 0;
}