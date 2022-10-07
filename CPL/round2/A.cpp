#include <bits/stdc++.h>
using namespace std;
bool isPrime[200];

void indef(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

void sieve() {
    for(int i = 0; i <= 200;++i) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= 200; ++i) {
         if(isPrime[i] == true) {
             for(int j = i * i; j <= 200; j += i)
                 isPrime[j] = false;
        }
    }
}
int near(int n){
    int a = n;
    int b = n;
    while(!(isPrime[a] || isPrime[b])){
        a--;
        b++;
    }
    if (isPrime[a]) return a;
    if (isPrime[b]) return b;

}

int main() {
    indef();
    sieve();
    int l = 1;
    int r = 98;

    int mid =  43;
    char inp;
    int d = 5;
    int ans = 1;
    while(l<r && d){
        cout << "? " << mid << endl;
        cin >> inp;
        if (inp == '>'){
            r = mid-1;
        }else{
            ans = mid;
            l = mid+1;
        }
        d--;
        mid = near((l+r)/2);

    }
    cout << "! " << ans << endl;
    
    return 0;
}