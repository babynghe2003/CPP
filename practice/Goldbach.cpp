#include <iostream>
#include <stdio.h>
using namespace std;

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}  
 
int main() {
  indef();
  int soluong;
   cin >> soluong;
   int N, A[soluong+1];
  for (int i=1; i<=soluong; i++){
  	cin >> A[i];
  	N=max(N,A[i]);
  }
  N=N+10;
   
  bool check[N + 1];
  // Kh?i t?o t?t c? c�c s? [2...N] �?u l� s? nguy�n t?
  for (int i = 2; i <= N; i++) {
    check[i] = true;
  }
 
  // Thu?t to�n s�ng nguy�n t?
  // N?u m?t s? l� s? nguy�n t?, th? t?t c? c�c b?i c?a n� kh�ng ph?i s? nguy�n t?
  for (int i = 2; i <= N; i++) {
    if (check[i] == true) {
      for (int j = 2 * i; j <= N; j += i) {
        check[j] = false;
      }
    }
  }
  int p1, p2, j;
  // In ra c�c s? l� s? nguy�n t?
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
