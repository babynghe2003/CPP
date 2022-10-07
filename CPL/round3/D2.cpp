#include <bits/stdc++.h>
using namespace std;
#define R 1100
#define C 1100

bool A[R][C];

int numofneighbour(int i, int j)
{
    int count = 0;
 
    if (i > 0)
        if (A[i - 1][j])
            count++;
 
    if (j > 0) 
        if (A[i][j - 1])
            count++;
 
    if (i < R-1) 
        if (A[i + 1][j])
            count++;
 
    if (j < C-1) 
        if (A[i][j + 1])
            count++;

    return count;
}

void solve() {
    int n,t;
    cin >> n >> t;
    long long S = 0;
    for (int i = 0; i<n; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int j = x1; j<x2; j++){
            for (int k = y1; k<y2; k++){
                if (A[j][k] == 0){
                    A[j][k] = 1;
                    S++;
                }
            }
        }
    }
    cout << S << endl;

    if (t == 2){
        long long perimeter = 0;
 
        for (int i = 0; i < 1050; i++)
            for (int j = 0; j < 1050; j++)
                if (A[i][j])
                    perimeter += (4 - numofneighbour(i ,j));
        cout << perimeter;
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
        solve();
    
    return 0;
}