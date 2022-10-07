#include <iostream>
#include <stdio.h>
using namespace std;
 
int main() {
  int soluong;
   cin >> soluong;
   int N, A[soluong+1];
  for (int i=1; i<=soluong; i++){
  	cin >> A[i];
  	N=max(N,A[i]+10);
  }
   
  bool check[N + 1];
  // Kh?i t?o t?t c? các s? [2...N] ??u là s? nguyên t?
  for (int i = 2; i <= N; i++) {
    check[i] = true;
  }
 
  // Thu?t toán sàng nguyên t?
  // N?u m?t s? là s? nguyên t?, th? t?t c? các b?i c?a nó không ph?i s? nguyên t?
  for (int i = 2; i <= N; i++) {
    if (check[i] == true) {
      for (int j = 2 * i; j <= N; j += i) {
        check[j] = false;
      }
    }
  }
  int p1, p2, j;
  // In ra các s? là s? nguyên t?
  for (int i=1; i<=soluong; i++){
  	j=A[i]-1;
  	while ((check[j]==false) && (j<=N)){
  		j--;
	  }
	p1=j; j=A[i]+1;
	while ((check[j]==false) && (j>=1)){
  		j++;
	  }
	p2=j;
	if (A[i]==(p1+p2)/2){
		cout << "YES" << endl;
	}else {
		cout << "NO" << endl;
	}
  } 
}

