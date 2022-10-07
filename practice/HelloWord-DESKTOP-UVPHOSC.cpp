#include<iostream>

using namespace std;

int main() {
	int A[100];
	int n;
	
	cout << "nhap n=";
	cin >> n;
	for (int i=0; i<n; i++ ){
		cout << "nhap A thu:" << i << endl;
		cin >> A[i];
	} 
	for (int i = n; i>=0; i--){
		cout << A[i]<< endl;
	}
	return 0;
}
