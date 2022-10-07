#include <bits/stdc++.h>
using namespace std;

// check 3 side length of triangle is valid
bool isValid(double a, double b, double c) {
    if (a + b > c && a + c > b && b + c > a) {
        return true;
    }
    return false;
}

long long hypotenuse(long long a, long long b) {
    return round(sqrt(a * a + b * b))==sqrt(a * a + b * b) ? round(sqrt(a * a + b * b)) : -1;
}

int main(){S

    long long n,t;
    cin >> n >> t;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a,a+n);
    long long pos;
    long long res = 0;
    switch (t)
    {
        case 1:
            break;
        case 2:
            for(int i = 0; i < n-2; i++){
                for(int j = i+1; j < n-1; j++){
                    pos = lower_bound(a+j,a+n,hypotenuse(a[i],a[j])) - a;    
                    if (a[pos] == hypotenuse(a[i],a[j])) {
                        int count = 1;
                        int k = pos+1;
                        while (i<n){
                            if (a[k] == a[pos]) {
                                count++;
                                k++;
                            }else{
                                break;
                            }
                        }
                        k = pos - 1;
                        while (i>=0){
                            if (a[i] == a[pos]) {
                                count++;
                                k--;
                            }else{
                                break;
                            }
                        }
                        res+=count;
                    }
                }
            }
            break;
        case 3:
            
            break;
        default:
            break;
    }
    cout << res << endl;
    return 0;
}

