#include <bits/stdc++.h>
#include<list>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string S,c;
    vector<char> T;
    cin >> S >> c;
    for (int i = 0; i < c.size(); i++){
        T.push_back(c[i]);
    }
    int N=T.size();
    sort(T.begin(), T.end());
    char temp;
    c="";
    vector<char>::iterator temp1;
    for (int i = 0; i< S.size(); i++){
        temp1 = lower_bound(T.begin(),T.end(),S[i]);
        if (T[temp1-T.begin()] == S[i]){
            c+=S[i];
            T.erase(temp1);
        }
    }
    if (c.size()!=N) cout << -1;
    else cout << c;
    return 0;
}