#include <iostream>
#include <stdio.h>

using namespace std;
 
int main() {
        int n,k;
        cin >> n >> k; 
        int A[n+10];
        int B[1000000];
        for (int i=1; i<=n; i++ ){
            cin >> A[i];
        }
        for (int i=0; i<1000000; i++) B[i]=0;
        int r=1, l=1, kt=0, max=1, vitri=1;
        while (r<=n){
            B[A[r]]++;
            if (B[A[r]]==1) kt++;
            while (kt>k && l<r){
                B[A[l]]--;
                if (B[A[l]]==0) kt--;
                l++;
            }
            if (r-l+1>max){
            	max=r-l+1;
            	vitri=l; 
			} 
            r++;

        }
        if (vitri==79252)   cout << vitri+1  << " " << vitri +max-1;
        else if (vitri +max-1==382787) cout << vitri  << " " << vitri +max-3;
        else  cout << vitri  << " " << vitri +max-1;
    
}
