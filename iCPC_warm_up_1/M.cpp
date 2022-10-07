#include<bits/stdc++.h>
using namespace std;
int n, q, a, b, c;
int L[200006];
int A[200006];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> q;

    int sophong = 1;

    while (q--){

        cin >> a >> b >> c;

        if (a == 1){
            if (L[b] == 0 && L[c] != 0){
                L[b] = L[c];
            }else if (L[b] != 0 && L[c] == 0){
                L[c] = L[b];
            }else if (L[b] != 0 && L[c] != 0){
                int temp = L[c];
                for (int i = 0; i < n+3;i++){
                    if (L[i] == temp){
                        L[i] = L[b];
                    }
                }
            }else {
                L[b] = sophong;
                L[c] = sophong;
                sophong++;
            }
        }else if (a == 2){
            bool y = false;
            for (int i = b; i<= c; i++){
                if (L[i] != 0){
                    int temp1 = L[i];
                        for (int j = b; j<=c; j++){
                            if (L[j]== 0){
                                L[j] = temp1;
                            }else{
                                int temp2 = L[j];
                                for (int k = 0; k<n+3; k++){
                                    if (L[k] == temp2){
                                        L[k] = temp1;
                                    }
                                }
                            }
                        }
                    y = true;
                    break;
                }
            }
            if (y == false){
                for (int i = b; i<=c; i++){
                    L[i] = sophong;
                }
                sophong++;
            }
        }else if (a == 3){
            if (L[b] == L[c] && L[c]!=0 ){
                cout << "YES\n";
            } else cout << "NO\n";
        }
    }


    return 0;
}