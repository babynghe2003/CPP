#include <bits/stdc++.h>
using namespace std;

long long L[1005][1005];
int mod = 1e9+7;

void addP(int x1, int y1, int x2, int y2){
    long long d = 1;
    for (int i = x1; i <= x2; i++){
        for (int j = y1; j <= y2; j++){
            L[i][j] = d;
            d=(d*2)%1000000000000000000;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N,M,P,Q;

    cin >> N >> M >> P >> Q;

    int x1,y1,x2,y2;
    for (int i = 0; i < P; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        addP(x1,y1,x2,y2);
        for (int i = 1; i <= N; i++){
            for (int j = 1; j <= M; j++){
                cout << L[i][j]<<" ";
            }
            cout << endl;
        }
    }
    for (int i = 0; i < Q; i++){
        long long S=0; 
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = x1; i <= x2; i++){
            for (int j = y1; j <= y2; j++){
                S= (S+L[i][j])%mod;
            }
        }
        cout << S << endl;
    }
    return 0;
}