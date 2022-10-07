#include <iostream>

using namespace std; 
int main(int argc, char** argv) {
	string Bin, Hex;
	cin >> Bin;
	int d=1, S=0,c; 
	
	for  (int i = Bin.length()-1; i>=0; i--){
		c=1;
		if (Bin[i]=='0')
		 c=0;
		S+=(d*c);
		d*=2;
	}
	string m;

	while (S>=16){
		c=S%16;
		if (c<='9' && c>'0') m=c+48;
		else m=c+55;
		Hex=m+Hex;
		S/=16; 
		}
	if (S>0) {
	c=S%16;
	m=c+48; 
	Hex=m+Hex; 
}
	cout << Hex;
	return 0;
}
