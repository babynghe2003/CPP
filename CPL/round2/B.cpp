#include <bits/stdc++.h>
using namespace std;

int parent[100];
int ranks[100];
int N,K;
int A[25][25];
int DaDo[25];

void make_set(int v) {
    parent[v] = v;
    ranks[v] = 0; // Gốc của cây có độ cao là 0
}
int find_set(int v) {
    return v == parent[v] ? v : parent[v] = find_set(parent[v]);
}
void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (ranks[a] > ranks[b]) swap(a, b); // Đặt biến a là gốc của cây có độ cao lớn hơn
        parent[a] = b;
        if (ranks[a] == ranks[b]) ranks[a]++; // Nếu như hai cây có cùng một độ cao, độ cao của cây mới sau khi gộp sẽ tăng 1
    } 
}



int countRoot(){
    set<int> s;
    for (int i = 1; i <= N; i++){
        s.insert(find_set(i));
    }
    return s.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> K;
    for (int i = 1; i<=N; i++) make_set(i);

    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= N; j++){
            cin >> A[i][j];
        }
    }
    int ans = 0;
    int d = 1;
    while(countRoot()>K){
        for(int i = 1; i<=N; i++){
            for (int j = 1; j<=N; j++){
                if (A[i][j] == d && find_set(i) != find_set(j)){
                    union_sets(i,j);
                    ans += d;
                    // cout << "t" << i << ' ' << j << endl;
                    if (countRoot()==K){
                        cout << ans;
                        return 0;
                    }
                }
            }
        }
        d++;
    }
    cout << ans;
    
    return 0;
}