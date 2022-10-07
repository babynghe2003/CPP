#include<iostream>

using namespace std;

int main() {
	int A[100], n ; 
	
	cout << "nhap n=";
	cin >> n;
	for (int i=0; i<n; i++ ){
		cout << "nhap A thu:" << i ;
		cin >> A[i];
	//	endl; 
	} 
	for (int i = n; i>=0; i--){
		cout << A[i]<< endl;
	}
	return 0;
}
