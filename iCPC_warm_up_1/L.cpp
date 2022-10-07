#include<bits/stdc++.h>
using namespace std;
int A[1000005];
struct sw
{
    int l, r;
};
sw L[1000000];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin >> n >> m;
    for (int i = 1; i<=n; i++){
        cin >> A[i];
    }

    for (int i = 0; i<m; i++){
        cin >> L[i].l >> L[i].r;
    }
    bool con = true;
    while (con){

        con = false;
        for (int i = 0; i<m; i++){
            if (A[L[i].l] < A[L[i].r]){
                swap(A[L[i].l],A[L[i].r]);
                con = true;
            }
        }
    }
    for (int i = 1; i<=n; i++){
        cout << A[i] <<" ";
    }
    return 0;
}