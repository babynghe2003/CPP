#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

vector<int> manacher_odd(string s) {
    int n = s.size();
    s = "$" + s + "^";
    vector<int> p(n + 2);
    int l = 1, r = 1;
    for(int i = 1; i <= n; i++) {
        p[i] = max(0, min(r - i, p[l + (r - i)]));
        while(s[i - p[i]] == s[i + p[i]]) {
            p[i]++;
        }
        if(i + p[i] > r) {
            l = i - p[i], r = i + p[i];
        }
    }
    return vector<int>(begin(p) + 1, end(p) - 1);
}

vector<int> manacher(string s) {
    string t;
    for(auto c: s) {
        t += string("#") + c;
    }
    auto res = manacher_odd(t + "#");
    return vector<int>(begin(res) + 1, end(res) - 1);
}

void solve()
{
  int n;
  cin >> n;
  string s;
  cin >> s;
  int res = 0;
  vector<int> L = manacher(s);
  for (int i = 0; i < L.size(); i++){
    cout << L[i] << " ";
  }
  cout << res;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // indef();

  int t = 1;
  // cin >> t;

  while (t--)
  {
    solve();
  }

  return 0;
}
