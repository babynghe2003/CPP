#include <bits/stdc++.h>
using namespace std;
int soul(int y){
    int dem = 1, dem_1 = 0 ,x=y;
    for (int i = 2; i <= x; i++){
        dem_1=0;
        while (x % i==0){
            dem_1++;
            x /= i;
        }
        if (dem_1 > 0) dem *= (dem_1+1);

    }
    return dem;
}
int main()
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);cout.tie(0);
    long T, a, b;
    int B[1000000];
    for (int q=2; q<=100000; q++){
     B[q]=B[q-1]+(soul(B[q])); 
    }
    cin >> T;
    for (int q = 1; q <= T; q++){
        cin >> a >> b;
        cout << B[b]-B[a] << endl;
    }
    // system("pause");
    return 0;
}