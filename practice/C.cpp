#include <bits/stdc++.h>
using namespace std;
#define ll long long
void indef(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
}

struct Fwtree{
  vector<ll> bit;
  int n;
  Fwtree(int n){
    this->n = n;
    bit.assign(n+1,0);
    Fwtree(vector<ll> a):Fwtree(a.size()){
      for (size_t i = 0; i < a.size(); i++){
        add(i,a[i]);
      }
    }
    void add(int i, ll delta){
      for (;i<=n; i = i|(i+1)){
        bit[i] += delta;
      }
    }
    ll sum(int r){
      ll res = 0;
      for (;r>=0;r = (r&(r+1))-1){
        res += bit[r];
      }
      return res;
    }
    ll sum(int l, int r){
      return sum(r) - sum(l-1);
    }
  };


void solve() {
  int n;
  cin >> n;
  cout << n;

}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  indef();

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}
