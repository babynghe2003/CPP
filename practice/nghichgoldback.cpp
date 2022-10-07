#include <bits/stdc++.h>
using namespace std;
bool snt(int x){
    for(int i = 2; i <= sqrt(x); i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}
int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    for (int i=4; i*2<=T; i++){
        if (snt(i)== false && snt (T-i)==false){
            cout << i << " " << T-i;
            break;
        }
    }
    system("pause");
    return 0;
}