#include <bits/stdc++.h>
using namespace std;
#define ll long long
void indef(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
}
int maxN = 100005;
vector<int> a(maxN);
vector<multiset<int>> st(maxN);

void build(ll id, ll l, ll r){
	if (l == r){
		st[id].insert(a[l]);
		return;
	}

	ll m = (l + r) >> 1;
	build(id*2, l, m);
	build(id*2+1, m+1, r);

	st[id]=st[id*2];
	st[id].insert(st[id*2+1].begin(), st[id*2+1].end());
}

void update(ll id, ll l, ll r, ll i, ll val){
	if (i<l || i>r){
		return;
	}

	if (l == r){
		st[id].clear();
		st[id].insert(val);
		return;
	}

	ll m = (l + r) >> 1;
	update(id*2, 1, m, i, val);
	update(id*2+1, m+1, r, i, val);
	
	st[id] = st[2*id];
	st[id].insert(st[id*2+1].begin(), st[id*2+1].end());
}

multiset<int> get(ll id, ll l, ll r, ll u, ll v){
	if (l > v || r < u ){
		multiset<int> k;
		return k;

	}	
	if (l >= u && r <= v) return st[id];


	ll m = (l + r) >> 1;
	multiset<int> get1 = get(id*2, l, m, u , v);
	multiset<int> get2 = get(id*2+1, m+1, r, u, v);
	get1.insert(get2.begin(),get2.end());
	return get1;
}

void solve() {
	ll n, t;
	cin >> n >> t;
	for (ll i = 1; i <= n; i++) cin >> a[i];
	build(1,1,n);
	while (t--){
		ll ch, x, y;
		cin >> ch >> x >> y;
		if (ch == 1){
			update(1, 1, n, x, y);
		}else{
			int k;
			cin >> k;
			multiset<int> ans = get(1, 1, n, x, y);
			auto p = *lower_bound(ans.begin(), ans.end(), k);
			cout << (p<k?-1:p) << endl;
		}
	}
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	indef();
	
	solve();

	return 0;
}
