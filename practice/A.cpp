#include <bits/stdc++.h>
using namespace std;
#define ll long long
void indef(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
}

ll A[1000000];
void solve() {

    int H, W, N, h, w;
    cin >> H >> W >> N >> h >> w;
    
    int A[H][W];
    map<int, int> m;
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> A[i][j];
            m[A[i][j]]++;
        }
    }
    for (int i = 0; i <= H - h; i++){
        for(int j = 0; j <= W - w; j++){
            map<int, int> m1;
            for(int k = i; k < i + h; k++){
                for(int l = j; l < j + w; l++){
                    m1[A[k][l]]++;
                }
            }
            int d = m.size();
            for (auto const& [key, val] : m){
                if (m1[key] == val){
                    d--;
                } 
            }
            cout << d << " ";
    }
    cout << endl;
    }

   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    indef();

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
