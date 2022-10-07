#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> A;
    int N,c;
    cin >> N;
    for (int i = 1; i<= N; i++){
        cin >> c;
        A.insert(c);
    } 
    for (int x  : A){
        cout << x;
    }
    system("pause");
    return 0;
}