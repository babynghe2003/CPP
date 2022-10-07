#include<bits/stdc++.h>
using namespace std;
int main(){
    string S,T;
    int N; 
    cin >> N;
    while (N--){
        cin >> S >> T;
        S="0"+S;
        T="0"+T;
        int L[S.length()+1]; 
        for (int i=0; i<=S.length(); i++){
            L[i]=0;
        }
        for (int i = 1; i < T.length(); i++){
            for (int j = 1; j< S.length(); j++){
                if (S[j]==T[i] && L[j] == L[j-1]) L[j]++;
                else  L[j]=max(L[j],L[j-1]);
                
            }
            for (int k=1; k<S.length();k++){
                        cout << L[k] << " ";
            }
            cout << endl;
        }
        for (int i=1; i<S.length();i++){
            cout << L[i] << endl;
        }
        cout << L[S.length()-1];
        int M=S.length()-L[S.length()-1]+T.length()-L[S.length()-1]-2 ;
        // if (S.length()<T.length()){
        //     cout << T.length()-L[S.length()-1] << endl;
        // } else {
        //     cout << S.length()-L[S.length()-1] << endl;
        // }
    }
    system("pause");
    return 0;
}