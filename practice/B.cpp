#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int q;
    cin >> q;
    while (q--){
        long long n,m;
        cin >> n >> m;
        if (n == 1){
            cout << "Yes" << endl;
            cout << m << endl;
        } else if (m % n == 0){
            cout << "Yes" << endl;
            for (int i = 0; i < n; i++){
                cout << m/n << " ";
            }
            cout << endl;

        } else if (n > m){
            cout << "No" << endl;
        } else {
            if (n % 2 != 0){
                cout << "Yes" << endl;
                for (int i = 1; i<n; i++){
                    cout << 1 << " ";
                }
                cout << m - n + 1 << endl;
            } else {
                if (m % 2 == 0){
                    cout << "Yes" << endl;
                    for (int i = 1; i<n-1; i++){
                        cout << 1 << " ";
                    }
                    cout << (m-n+2) / 2 << " " << (m-n+2) / 2 << endl;
                }else {
                    cout << "NO";
                }
            }
        }
        
    }
	
	return 0;
}
