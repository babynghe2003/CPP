#include<bits/stdc++.h>
using namespace std;
int N,M,K,d = 0;
int A[100000];
string decimalToBinary(int n)
{
    string s = bitset<64> (n).to_string();
    const auto loc1 = s.find('1');
	if(loc1 != string::npos)
        return s.substr(loc1);
    return "0";
}
bool kiemtra (string x, string y){
	long d1=0;
	for (int r=0; r < M; r++){
		if (x[r] != y[r]) d1++; 
		if (d1>K) return false;
	}
	if (d1==K) return true;
	return false;
}
string tu(int j){
	string c = decimalToBinary(j);
	if (c.length() < M){
		int n = M - c.length();
		while (n--){
			c = "0"+c;
		}
	}
    return c; 
}
int main(){
	// ios_base::sync_with_stdio(0);
	// cin.tie(0); cout.tie(0);
	cin >> N >> M >> K;
	string c;
	for (int i = 1; i<=N; i++){
		cin >> c;
		A[stoi(c,0,2)]++;
	}
	// cout << tu(3);
	int H = pow(2,M);
	for (int i = 0; i<H;i++){
		if (A[i] > 0)
		for (int j=i+1; j<= H; j++){
			if (A[j]>0)
			if (kiemtra(tu(i),tu(j))==true){
				d+=A[i]*A[j];
				// cout << tu(i) << " " << tu(j) << endl;
			} 
		}
	}
	cout << d;
	system("pause");
	return 0;
}
