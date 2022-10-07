#include <bits/stdc++.h>
using namespace std;
string A[30];
int M,N, Max=0;
int maxWH(int x, int y ){
    int m=2;
    int maxH=x, maxW=y, minH=0;
    while (A[x][maxW]=='0' && maxW>=0){
        maxH=x;
        if (maxH>minH){
        while (A[maxH-1][maxW]=='0' && maxH>minH+1){
            maxH--;
        }}
        minH=maxH;
        m=max(m,(x-maxH+1)+(y-maxW+1));

        if (maxW>0)
        maxW--;
        else return m;
    }
    return m;
}
int main()
 {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);
    
    cin >> N >> M;
   
    // N hàng M cột
    for (int i = 0; i < N ; i++){
        cin >> A[i];
        for (int j = 0; j < M; j++){
            if (A[i][j] == '0')
            Max=max(Max,maxWH(i,j));
            cout << maxWH(i,j) << " ";
        }

    }

    cout << Max*2;
    system("pause");
    return 0;
}
