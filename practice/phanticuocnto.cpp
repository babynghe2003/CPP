#include <bits/stdc++.h>
using namespace std;
bool snt(int x){
    int count = 0;
    for(int i = 2; i <= sqrt(x); i++){
        if(x % i == 0){
            count++;
        }
    }
    return count;
}
int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);cout.tie(0);
    int N, dem, S=1;
    cin >> N;
    
    for (int i=2; i<=N; i++){
        dem=0; 
        if (snt(N)==false){
            cout << N;
            if (S!=1)
            S*=2;
            else S++;
            break;
        } 
        else{
        while (N % i == 0){
            dem++;
            N/=i;
            if (N==1) cout << i; 
            else cout << i << "*";
        }
        S*=dem+1;
        }
        
    }
    cout << endl << S;
    system("pause");
    return 0;
}