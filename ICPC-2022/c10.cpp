#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    
    long long a[2*n+2];

    for (int i = 0; i<2*n; i++){
        cin >> a[i];
    }

    long long Max = INT_MIN;
    do{
        int sum = 0;
        for (int i = 0; i<2*n; i++){
            cout << a[i] << " ";
        }
        cout << endl;

        // Max = max(Max,sum);
    }while(next_permutation(a,a+2*n));

    // cout << Max;

    return 0;
}