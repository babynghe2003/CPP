#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
    string S;
    cin >> S;
    int res = 0, bit = 0;
    if (S[S.size()-1]=='0'){
        res = 1;
    }

    for (int i = 1; i < S.size(); i++){

        if (S[i]=='0' && bit == 0){
            res++;
        }else if(S[i]=='1' && bit == 1){
            bit = 0;
        }else if(S[i]== '1' && bit == 0){
            bit = 1;
        }else if (S[i]=='0' && bit == 1){
            bit = 0;
        }
        // cout << i << res  << bit << endl;
    }
    if (bit == 0 && S[S.size()-1]=='1'){
        res++;
    }
    cout << res;
    return 0;
}