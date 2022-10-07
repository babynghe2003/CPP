#include <bits/stdc++.h>
using namespace std;
int L[1000005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T,d;
    cin >> T;
    while (T--){

        d=0;

        string S;
        cin >> S;
        if (S[0] == '1' && S[1] == '0'){
            L[1] = 1;
            L[2] = -1;
        } else if (S[0] == '1'){
            L[1] = 2;
            d++;
        } 
        for (int i=1; i<S.length(); i++){
            if (S[i] == '1'){
                if (S[i-1] == '0' && L[i] == 0){
                    L[i+1]=-1;
                    L[i]=1;
                } else if (S[i+1] == '0'){
                    L[i+2] = -1;
                    L[i+1]=1;
                } else{
                     L[i+1]= 2;
                     d++;
                }
            }
        }
        cout << d << endl;


    }
    return 0;
}