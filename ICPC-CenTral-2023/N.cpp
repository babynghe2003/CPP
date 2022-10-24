#include <bits/stdc++.h>
#define ll long long 
#define lld long double
#define ull unsigned long long int
#define ff first
#define ss second
#define pb push_back
#define nl "\n"
#define sp " "
#define pll pair<ll,ll>
#define pii pair<int,int>
#define fl(i, n, m) for (int i = n; i < m; ++i)
#define vr(v) v.begin(), v.end()
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) ((x*y)/__gcd(x, y))
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
using namespace std;

void IO() {
    #ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

ll const MOD = 1e9 + 7;
ll const MAX = 1e5 + 5;
ll n;
ll arr[MAX];
ll cnt[6];
ll gt[6];

ll c2(ll a) {
    ll c = a*(a-1)/2;
    return c;
}

ll c3(ll a) {
    ll c = a*(a-1)*(a-2)/6;
    return c;
}

int main() {
    fastIO
    IO();
    cin >> n;
    fl (i, 0, n) cin >> arr[i], ++cnt[arr[i]%5];
    ll s = 0;
    if (n >= 3) {
        s += cnt[1]*c2(cnt[2]);
        s += cnt[3]*c2(cnt[1]);
        s += cnt[2]*c2(cnt[4]);
        s += cnt[4]*c2(cnt[3]);
        s += c3(cnt[0]);
        s += cnt[0]*cnt[3]*cnt[2];
        s += cnt[0]*cnt[1]*cnt[4];
    }
    cout << s;
}