#include <bits/stdc++.h>
using namespace std;

struct vla
{
    char value;
    int index;
    vla(){}
    vla(char value,int index):value(value),index(index){}
};

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    vla A[n];

    for (int i = 0; i < n;i++){
        A[i] = vla(s[i],i);
    }

    sort(A,A+n,[](vla a,vla b){
        return a.value<b.value;
    });

    int d = 0;
    vector<int> res;
    res.push_back(1);
    if (s[0]<s[n-1]){
        for (int i = 0; i<n; i++){
            if (A[i].value>=s[0] && A[i].value<=s[n-1] && A[i].index != 0 && A[i].index != n-1){
                res.push_back(A[i].index+1);
            }
        }
    }else {
        for (int i = n-1; i>=0; i--){
            if (A[i].value>=s[n-1] && A[i].value<=s[0] && A[i].index != 0 && A[i].index != n-1){
                res.push_back(A[i].index+1);
            }
        }
    }
    res.push_back(n);
    cout << abs(s[0]-s[n-1]) << " " << res.size() << endl;
    for (int l : res){
        cout << l << " ";
    }
    cout << endl;


}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    return 0;
}