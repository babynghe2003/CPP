#include <bits/stdc++.h>
using namespace std;

long long parent[10000];
long long sz[10000];

int find_set(int v) {
    return v == parent[v] ? v : parent[v] = find_set(parent[v]);
}

void make_set(int v) {
    parent[v] = v;
    sz[v] = 1; // Ban đầu tập hợp chứa v có kích cỡ là 1
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (sz[a] < sz[b]) swap(a, b); // Đặt biến a là gốc của cây có kích cỡ lớn hơn
        parent[b] = a;
        sz[a] += sz[b]; // Cập nhật kích cỡ của cây mới gộp lại
    } 
}

void solve() {
    for (int i = 1; i<=100; i++){
        make_set(i);
    }
    int n , t;
    cin >> n >> t;
    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        union_sets(a,b);
    }
    sort(sz,sz+100,greater<int>());
   cout << sz[0];
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    // cin >> t;
    
    while (t--) {
        solve();
    }

    // solve();
    
    return 0;
}