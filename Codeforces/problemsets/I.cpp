#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,x[100],a[100],cnt,sum;
map < int , bool > ans;
void solve1(int dis){
   for(int i=1;i*i<=dis;++i){
        if(dis%i==0){
            if(i>n) ans[i]=true;
            if(dis/i>n) ans[dis/i]=true;
        }
   }
   return;
}
int T[100];
bool solve2(int t){
    memset(T,0,sizeof(T));
    for(int i=1;i<=n;++i){
        if(T[x[i]%t] && T[x[i]%t]!=a[i]) return 1;
        T[x[i]%t]=a[i];
    }
    for(int i=0;i<t;++i) if(T[i]==0) return 0;
    for(int tt=1;tt<t;++tt){
        for(int i=0;i<t;++i)
                if(T[i]!=T[(i+tt)%t])
                goto nxt;
        return 1;
        nxt:;
    }
    return 0;
}
int main(){
    cin >> n;
    for(int i=1;i<=n;++i){
        cin >> x[i] >> a[i]; x[i]+=1000000010;
   } 
    for(int i=1;i<=n;++i)
            for(int j=i+1;j<=n;++j)
                    if(a[i]!=a[j]){
                        solve1(abs(x[i]-x[j]));
                    }
    for(int t=1;t<=n;++t){
            if(solve2(t)) ans[t]=true;
    } 
    for(auto it : ans) if(it.second) ++cnt,sum+=it.first/*,print(it.first)*/;
    cout << cnt << " " << sum;
    return 0;
}
