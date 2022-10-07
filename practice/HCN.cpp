#include <bits/stdc++.h>
using namespace std;
int A[26][26];
int M,N, Max=0;
int maxWH(int x, int y ){
    int m=2;
    int maxH=x, maxW=y, minH=1;
    while (A[x][maxW]==0 && maxW>=1){
        maxH=x;
        while (A[maxH][maxW]==0 && maxH>minH){
            maxH--;
        }
        minH=maxH;
        m=max(m,(x-maxH)+(y-maxW+1));
        maxW--;
    }
    return m;
}
int main()
 {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);
    
    cin >> N >> M;
   
    // N hàng M cột
    for (int i = 1; i <= N ; i++){
        for (int j = 1; j <= M; j++){
            cin >> A[i][j];
            if (A[i][j] == 0)
            Max=max(Max,maxWH(i,j));
            cout << maxWH(i,j) << " ";

        }
        cout << endl;
    }

    cout << Max*2;
    system("pause");
    return 0;
}