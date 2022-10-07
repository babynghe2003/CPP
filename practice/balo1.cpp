#include<bits/stdc++.h>
using namespace std;

char Map[22][22];
int Visit[22];
int m,n;
int d = 0;
int res = 1e9;
bool kt = false;
bool isPalindrome(string S)
{
    // Iterate over the range [0, N/2]
    for (int i = 0; i < S.length() / 2; i++) {
 
        // If S[i] is not equal to
        // the S[N-i-1]
        if (S[i] != S[S.length() - i - 1]) {
            // Return No
            return false;
        }
    }
    // Return "Yes"
    return true;
}

void timduong(int pos, string s, int vi[]){
	if (pos == 2){
		if (isPalindrome(s) && s.length()<res){
			res = s.length();
		}
		return;
	}else{
		vi[pos] = 1;
		for (int i = 1; i <= n; i++){
			if ( Map[pos][i] != '\0' && vi[i] == 0){
				timduong(i,s+Map[pos][i],vi);
			}
		}
	}
	
}
int main()
{
	ios::sync_with_stdio(false);
	cin >> n >> m;
	int a,b;
	char c;
	for (int i = 0; i<m ; i++){
		cin >> a >> b >> c;
		Map[a][b] = c;
		Map[b][a] = c;
	}
	timduong(1,"",Visit);
	if (res > 30) cout << -1;
	else
	cout << res;
	return 0;
}