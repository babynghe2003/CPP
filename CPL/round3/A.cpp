#include <bits/stdc++.h>
using namespace std;

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

struct P
{
    int index = 0;
    int value = 0;
};

P A[1000];


void solve() {
   int n,m;
   cin >> n >> m;
   for (int i = 0; i<m; i++){
        A[i].index = i;
   }
   for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            int c;
            cin >> c;
            A[j].value+=c;
        }
   }
    sort(A,A+m,[](P a,P b){
        if (a.value != b.value) return a.value > b.value;
        return a.index<b.index;
    });
    
    for (int i = 0; i<m; i++){
        cout << A[i].index+1 << " ";
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

    // solve();
    
    return 0;
}