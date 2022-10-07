#include <bits/stdc++.h>

using namespace std;
int main()
{   
    string S,T;
    cin >> S >> T;
        S="0"+S;
        T="0"+T;
        int L[100000]; 
        for (int i=0; i<=S.length(); i++){
            L[i]=0;
        }
        for (int i = 1; i < T.length(); i++){
            for (int j = 1; j< S.length(); j++){
                if (S[j]==T[i] && L[j] == L[j-1]) L[j]++;
                else  L[j]=max(L[j],L[j-1]);
                
            }
        }
    cout << L[S.length()-1];
    return 0;
}