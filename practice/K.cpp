#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, player[100000], as, shel, S=0,max=0;
    vector<int> L;
    vector<int> R;
    cin >> N;
    for (int i = 1 ; i <= N; i++){
        cin >> player[i];
    }
    cin >> as;
    cin >> shel;
    for (int i = 1; i<= N; i++){
        if (player[i]>shel) R.push_back(abs(player[i]-shel));
        else L.push_back(abs(player[i]-shel));
    }
    if (as>shel){ max=L.size();
        sort(R.begin(),R.end());  
        for (int i = 0; i<R.size() && S<abs(as-shel); i++){
            S+=R[i];
            max++;
        }  
        if (S>abs(as-shel)) max--;
        cout << max;
    }
    else{ max=R.size();
        sort(L.begin(),L.end());  
        for (int i = 0; i<L.size() && S<abs(as-shel); i++){
            S+=L[i];
            max++;
        }  
        if (S>abs(as-shel)) max--;
        cout << max;
    }
    return 0;
}