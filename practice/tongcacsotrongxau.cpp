#include <bits/stdc++.h>
using namespace std;

long long StoIn(string S){
	long long res=0;
	for (int i = 0; i<S.size(); i++){
		res = res*10+(int)S[i]-48;
	}

	return res;
}

int main() {

	string S;
	getline(cin,S);

	string temp;
	int i = 0;
	long long res=0;
	while (i<S.size()){
		temp = "";
		while (i<S.size() && S[i]>='0' && S[i]<= '9'){
			temp += S[i];
			i++;
		}
		if (temp.length() > 0){
			res+= StoIn(temp);
		}
		i++;
	}
	cout << res;
	return 0;
}
