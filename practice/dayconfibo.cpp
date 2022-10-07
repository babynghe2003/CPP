
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{   
    int N;
    cin >> N;
    int A[N+1], L[N+1], SoKe[N+1];
    for (int i=1; i<=N; i++) cin >> A[i];
    L[0]=0; A[0]=0; L[1]=1; L[2]=2; SoKe[1]=0; SoKe[2]=0;
// tim cac phan tu dau cua day
    for (int i=3; i<=N; i++){
        L[i]=2; SoKe[i]=0;
        for (int j=2; j<i; j++){
            for (int k=1; k<j; k++){
                if (A[k]+A[j]==A[i]){
                    L[i]=3;
                    SoKe[i]=j;
                break;
                }
            if (L[i]>2) break;
            }           
        }
    } 

// quy hoach dong cac day dai nhat voi L[i] la day dai nhat den i
    for (int i=2; i<=N; i++){
        if (L[i]>2){
        for (int j=1; j<i; j++){
            if ((A[j]+A[SoKe[j]])==A[i] && (L[j]+1)>L[i] && SoKe[j]!=0){
                L[i]=L[j]+1;
                SoKe[i]=j;
            }
        }
        }
      }
    
    
    int max=0;
    for (int i=1; i<=N; i++){
        if (L[i]>max)
        {
            max=L[i];
            
        }
        // cout << A[i] << " " << L[i] << " " << SoKe[i] << endl;
    } 
    cout << N-max;
    system("pause");
    return 0;
}
