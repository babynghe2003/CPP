#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n+1],b[n+1];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    sort(b,b+n);

    int Min = INT_MAX;
    for (int i = 1; i < n; i++){
        int pos = lower_bound(b,b+n,a[i])-b;
        Min = min(Min,abs(a[i]-b[pos]));
        if (pos > 0){
            Min = min(Min,abs(a[i]-b[pos-1]));
        }
    }

    cout << Min;

    return 0;
}
