#include<string>
#include<iostream>

using namespace std;

int main() {
	string str;
	int i = 0 , j = 0, n, d, max = 0;
	char b,c; 
	cin >> str;
	n = str.length();
	while (i<n){
		d=0; j=i;
		while ((str[i] == str[j]) && (j <= n)){
			d++;
			j++; 
		}
		if ( max < d){
			max = d; 
		i=j-1;
		} 
		i++;
		
	} 
	cout << max; 
	return 0;
}
