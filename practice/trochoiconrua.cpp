#include <bits/stdc++.h>
#include <map>
using namespace std;

map<int, int> uocso;
int A[100005], B[100005];

void adduoc(int n, int m){
    for(int i = 1;i <= max(n,m);i++){
        if(n % i == 0 || m % i == 0){
            if (uocso.find(i) == uocso.end()){
                uocso[i]=1;
            }else {
                uocso[i]++;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    for (int i = 0; i < N; i++){
        cin >> B[i];
    }

    for (int i = 0; i < N; i++){
        adduoc(A[i], B[i]);
    }

    // for (int i = 1000000; i>=1; i--){
    //     if (uocso[i]==N){
    //         cout << i;
    //         return 0;
    //     }
    // }
    map<int, int>::iterator it;
    for (it = uocso.end(); it != uocso.begin(); it--) {
        if (it->second == N){
            cout << it->first;
            return 0;
        }
    }

    return 0;
}